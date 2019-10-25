#include <iostream>

void DrawVerticalBorderV1( int length )
{
    for( int i = 0; i < length; i++ )
    {
        if( i % 2 == 0 )
        {
            std::cout << "*";
        }
        else
        {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}

void DrawVerticalBorderV2( int length )
{
    for( int i = 0; i < length; i++ )
    {
        if( i % 2 == 0 )
        {
            std::cout << ".";
        }
        else
        {
            std::cout << "*";
        }
    }
    std::cout << std::endl;
}

void DrawHorizontalBorderV1()
{
    std::cout << "*.";
}

void DrawHorizontalBorderV2()
{
    std::cout << ".*";
}

void DrawContent( int length )
{
    for( int i = 0; i < length; i++ )
    {
        std::cout << ".";
    }
}


int main( int argc, char* arhv[] )
{
    int w = 0;
    int h = 0;

    std::cin >> h;
    std::cin >> w;

    DrawVerticalBorderV1( w );
    DrawVerticalBorderV2( w );

    for( int i = 0; i < ( h - 4 ); i++ )
    {
        if( i % 2 == 0 )
        {
            DrawHorizontalBorderV1();
            DrawContent( w - 4 );
            DrawHorizontalBorderV1();
        }
        else
        {
            DrawHorizontalBorderV2();
            DrawContent( w - 4 );
            DrawHorizontalBorderV2();
        }
        std::cout << std::endl;
    }

    if( ( h - 4 ) % 2 == 0 )
    {
        DrawVerticalBorderV1( w );
        DrawVerticalBorderV2( w );
    }
    else
    {
        DrawVerticalBorderV2( w );
        DrawVerticalBorderV1( w );
    }

    return 0;
}
