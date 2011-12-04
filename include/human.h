
class Human
{
    public:
        int getX(int x); //get coordinate X
        int getY(int y); //get coordinate Y
        int Init( int vision );
        int Clear( int vision );
    private:
        int x; //current coordinate X
        int y; //current coordinate Y
        int **visArea; //human scope
};
