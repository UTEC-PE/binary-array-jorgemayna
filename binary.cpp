#ifndef BOOLEAN_H
#define BOOLEAN_H

class boolean {
    private:
        char* array;
        int size;

    public:
        boolean(int size):size(size) {
            if(size%8==0){
                array= new char[size/8];
                for(int i=0;i<size/8;i++){
                    array[i]=0;
                }
            }
            else{
                array= new char[size/8+1];
                for(int i=0;i<size/8+1;i++){
                    array[i]=0;
                }
            }
        }

        void bitOn(int position) {
            array[position/8] |=1<<(position%8);
        }

        void bitOff(int position) {
            array[position/8] &=~(1<<(position%8));
        }

        bool operator[](int position) {
            if((array[position/8] & 1<<(position%8))==0){
                return 0;
            }else{
                return 1;
            }

        }

        void clear() {
            for(int i=0;i<size;i++){
                array[i]=0;
            }
        }

        ~boolean() {
            delete array;
        }
};

#endif
