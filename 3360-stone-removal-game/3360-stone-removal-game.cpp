class Solution {
public:
    bool canAliceWin(int n) {
        bool alice = true;
        int remove = 10;

        while(n >= remove){
            n -= remove;
            remove--;
            alice = !alice;
        }

        return !alice;
    }
};