#include <array>
#include <cstdint>
#include <cstring>
#include <limits>
#include <string>
#include <utility>
#include <vector>

class Solution {
private:
    static constexpr std::uint32_t EMPTY =
        std::numeric_limits<std::uint32_t>::max();

    static constexpr std::array<std::uint64_t, 26> CHARACTER_HASHES{
        0x161922c645ce50e8ULL,
        0xad760cafa1697b60ULL,
        0x3501ff44902ca50dULL,
        0x417cb9a826d831dfULL,
        0x99af6f9b0c4476b6ULL,
        0x5d51f5f75b762c59ULL,
        0x66239e8c309a282bULL,
        0x53e01f580916c5cbULL,
        0xaa941016a4c2958bULL,
        0x279993774594e137ULL,
        0x20e9a7a844bdacc0ULL,
        0x90ec693596cc8ab0ULL,
        0x4d7760d307367afaULL,
        0x4315096655b77a33ULL,
        0x0e907aa9d946b562ULL,
        0x1947cecfc10e24f3ULL,
        0x8a27bdf7c4b88166ULL,
        0x3989c8272f2ae095ULL,
        0xb7dc9a7f27f0b595ULL,
        0xa0f6c1d2ed13c145ULL,
        0xc54ad38a1e595bceULL,
        0xd87e930b7f41a756ULL,
        0x87ead6b5c67ec06bULL,
        0xa4353faba48b2382ULL,
        0x19a42fc02250ff9dULL,
        0x5baeac52832826b1ULL
    };

    struct Slot {
        std::uint64_t hash = 0;
        std::uint32_t groupIndex = EMPTY;
        std::array<std::uint8_t, 26> counts{};
    };

public:
    std::vector<std::vector<std::string>>
    groupAnagrams(std::vector<std::string> &strs) {
        std::size_t capacity = 2;

        while (capacity < strs.size() * 2) {
            capacity <<= 1;
        }

        std::size_t mask = capacity - 1;

        std::vector<Slot> table(capacity);

        std::vector<std::vector<std::string>> result;
        result.reserve(strs.size());

        for (std::string &str : strs) {
            std::array<std::uint8_t, 26> counts{};
            std::uint64_t hash = 0;

            for (unsigned char character : str) {
                std::size_t characterIndex =
                    static_cast<std::size_t>(character - 'a');

                counts[characterIndex]++;
                hash += CHARACTER_HASHES[characterIndex];
            }

            std::size_t slotIndex =
                static_cast<std::size_t>(hash ^ (hash >> 32)) & mask;

            while (true) {
                Slot &slot = table[slotIndex];

                if (slot.groupIndex == EMPTY) {
                    std::uint32_t newGroupIndex =
                        static_cast<std::uint32_t>(result.size());

                    result.emplace_back();
                    result.back().emplace_back(std::move(str));

                    slot.hash = hash;
                    slot.groupIndex = newGroupIndex;
                    slot.counts = counts;

                    break;
                }

                if (
                    slot.hash == hash &&
                    std::memcmp(
                        slot.counts.data(),
                        counts.data(),
                        counts.size()
                    ) == 0
                ) {
                    result[slot.groupIndex].emplace_back(std::move(str));
                    break;
                }

                slotIndex = (slotIndex + 1) & mask;
            }
        }

        return result;
    }
};