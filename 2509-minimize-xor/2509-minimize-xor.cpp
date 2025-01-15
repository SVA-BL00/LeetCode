class Solution {
public:
        // With help of Amritesh Chandra's code
        int countOnes(int num){
            int count = 0;
            while(num){
                count += num & 1; // Adding to count if last bit was 1
                num >>= 1;        // Shifting to the right to check the next number
            }

            return count;
        }

        int addBits(int num, int bits){
            int bitPos = 0;
            // Check if the current position has a 1, move 
            while(bits > 0){
                while((num >> bitPos) & 1){
                    bitPos++;
                }
                num |= (1 << bitPos);
                bits--;
            }

            return num;
        }

        int removeBit(int num, int bits){
            while(bits > 0){
                num &= (num - 1);
                bits--;
            }

            return num;
        }
    int minimizeXor(int num1, int num2) {
        int setBits1 = countOnes(num1);
        int setBits2 = countOnes(num2);

        if(setBits1 == setBits2) return num1;
        if(setBits1 < setBits2){
            return addBits(num1, setBits2 - setBits1);
        }
        return removeBit(num1, setBits1 - setBits2);
    }
};