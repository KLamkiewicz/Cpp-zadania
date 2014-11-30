#ifndef KOSTKA_H
#define KOSTKA_H


class Kostka{
    public:
        int f=9, b=9, r=9, l=9, d=9, u=9;
        char F[3][3], B[3][3], R[3][3], L[3][3], D[3][3], U[3][3];
        void initalize();
        void printKostka();
        void printo();
        Kostka();
    protected:
    private:
};

Kostka::Kostka(){
    initalize();
}

void Kostka::initalize(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            F[i][j] = 'f';
            B[i][j] = 'b';
            R[i][j] = 'r';
            L[i][j] = 'l';
            D[i][j] = 'd';
            U[i][j] = 'u';
        }
    }
}


void Kostka::printo(){
    static int o = 0;

        for(int i=0; i<3; i++){
            std::cout.width(3);
            std::cout << R[o][i];
        }
        for(int i=0; i<3; i++){
            std::cout.width(3);
            std::cout << L[o][i];
        }
        for(int i=0; i<3; i++){
            std::cout.width(3);
            std::cout << D[o][i];
        }
    o++;
}

void Kostka::printKostka(){
    int line = 0;
    for(int o=0; o<4; o++){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(o!=2){
                    if(j==0){
                        std::cout.width(9);
                        std::cout << " ";
                    }
                }
                switch(o){
                    case 0:
                        std::cout.width(3);
                        std::cout << F[i][j];
                        break;
                    case 1:
                        std::cout.width(3);
                        std::cout << B[i][j];
                        break;
                    case 3:
                        std::cout.width(3);
                        std::cout << U[i][j];
                        break;
                }
            }

            switch(o){
                case 2:
                    printo();
                    std::cout << std::endl;
                    break;
                default:
                    std::cout << std::endl;
                    break;

            }

        }
    }
}


#endif // KOSTKA_H
