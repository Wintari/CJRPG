class Player
{
private:
    int plrX, plrY;
public:
    Player()
    {
        plrX = 1;
        plrY = 1;
    }

    int getPlrX()
    {
        return plrX;
    }

    int getPlrY()
    {
        return plrY;
    }
    void plrMove(int x, int y)
    {
        plrX += x;
        plrY += y;
    }

};
