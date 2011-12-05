
class nwcHuman
{
    public:
        int getX(int x); //get coordinate X
        int getY(int y); //get coordinate Y
        int Init( int vision );
        int Clear( int vision );
        int x; //current coordinate X
        int y; //current coordinate Y
        char **visArea; //human scope
};
