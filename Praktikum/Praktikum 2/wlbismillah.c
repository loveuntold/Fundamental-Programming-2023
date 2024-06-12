#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
  int x, y;
  scanf ("%d %d", &x, &y);
  char grid[101][101] = { };
  char grid_end[101][101] = { };


//Jumlah Grid
  for (int i = 0; i < y; i++)
    {
      for (int j = 0; j < x; j++)
	{
	  grid[j][i] = ' ';
	  grid_end[j][i] = ' ';
	}
    }

  int xkoor, ykoor;
  char color;
  int jum_bom;

//Jumlah Bom
  scanf ("%d", &jum_bom);
  for (int i = 0; i < jum_bom; i++){
      for (int i = 0; i < y; i++){
	  for (int j = 0; j < x; j++){
	      grid[j][i] = ' ';
	    }
	}

      scanf ("%d %d %c", &xkoor, &ykoor, &color);

      if (color == 'R')
	{
	  //Bom merah
	  //printf ("Check Red");
	  grid[xkoor - 2][ykoor - 3] = 'R';
	  grid[xkoor - 1][ykoor - 3] = 'R';

	  grid[xkoor - 2][ykoor - 2] = 'R';
	  grid[xkoor][ykoor - 2] = 'R';
	  grid[xkoor + 2][ykoor - 2] = 'R';
	  grid[xkoor + 3][ykoor - 2] = 'R';

	  grid[xkoor - 1][ykoor - 1] = 'R';
	  grid[xkoor + 1][ykoor - 1] = 'R';
	  grid[xkoor + 3][ykoor - 1] = 'R';

	  grid[xkoor - 2][ykoor] = 'R';
	  grid[xkoor][ykoor] = 'R';
	  grid[xkoor + 2][ykoor] = 'R';

	  grid[xkoor - 3][ykoor + 1] = 'R';
	  grid[xkoor - 1][ykoor + 1] = 'R';
	  grid[xkoor + 1][ykoor + 1] = 'R';

	  grid[xkoor - 3][ykoor + 2] = 'R';
	  grid[xkoor - 2][ykoor + 2] = 'R';
	  grid[xkoor][ykoor + 2] = 'R';
	  grid[xkoor + 2][ykoor + 2] = 'R';

	  grid[xkoor + 1][ykoor + 3] = 'R';
	  grid[xkoor + 2][ykoor + 3] = 'R';
	}
      else if (color == 'G')
	{
	  //Bom Hijau
	  //printf ("Check Green");
	  grid[xkoor][ykoor - 3] = 'G';

	  grid[xkoor - 2][ykoor - 2] = 'G';
	  grid[xkoor - 1][ykoor - 2] = 'G';
	  grid[xkoor + 1][ykoor - 2] = 'G';
	  grid[xkoor + 2][ykoor - 2] = 'G';

	  grid[xkoor - 2][ykoor - 1] = 'G';
	  grid[xkoor + 2][ykoor - 1] = 'G';

	  grid[xkoor - 3][ykoor] = 'G';
	  grid[xkoor][ykoor] = 'G';
	  grid[xkoor + 3][ykoor] = 'G';

	  grid[xkoor - 2][ykoor + 1] = 'G';
	  grid[xkoor + 2][ykoor + 1] = 'G';

	  grid[xkoor - 2][ykoor + 2] = 'G';
	  grid[xkoor - 1][ykoor + 2] = 'G';
	  grid[xkoor + 1][ykoor + 2] = 'G';
	  grid[xkoor + 2][ykoor + 2] = 'G';

	  grid[xkoor][ykoor + 3] = 'G';
	}
      else if (color == 'B')
	{
	  //Bom Biru
	  //printf ("Check Blue");
	  grid[xkoor - 2][ykoor - 3] = 'B';
	  grid[xkoor - 1][ykoor - 3] = 'B';
	  grid[xkoor + 1][ykoor - 3] = 'B';
	  grid[xkoor + 2][ykoor - 3] = 'B';

	  grid[xkoor - 3][ykoor - 2] = 'B';
	  grid[xkoor - 2][ykoor - 2] = 'B';
	  grid[xkoor + 2][ykoor - 2] = 'B';
	  grid[xkoor + 3][ykoor - 2] = 'B';

	  grid[xkoor - 3][ykoor - 1] = 'B';
	  grid[xkoor - 1][ykoor - 1] = 'B';
	  grid[xkoor][ykoor - 1] = 'B';
	  grid[xkoor + 1][ykoor - 1] = 'B';
	  grid[xkoor + 3][ykoor - 1] = 'B';

	  grid[xkoor - 1][ykoor] = 'B';
	  grid[xkoor + 1][ykoor] = 'B';

	  grid[xkoor - 3][ykoor + 1] = 'B';
	  grid[xkoor - 1][ykoor + 1] = 'B';
	  grid[xkoor][ykoor + 1] = 'B';
	  grid[xkoor + 1][ykoor + 1] = 'B';
	  grid[xkoor + 3][ykoor + 1] = 'B';

	  grid[xkoor - 3][ykoor + 2] = 'B';
	  grid[xkoor - 2][ykoor + 2] = 'B';
	  grid[xkoor + 2][ykoor + 2] = 'B';
	  grid[xkoor + 3][ykoor + 2] = 'B';

	  grid[xkoor - 2][ykoor + 3] = 'B';
	  grid[xkoor - 1][ykoor + 3] = 'B';
	  grid[xkoor + 1][ykoor + 3] = 'B';
	  grid[xkoor + 2][ykoor + 3] = 'B';
	}

      for (int i = 0; i < y; i++)
	{
	  for (int j = 0; j < x; j++)
	    {
	      if (grid_end[j][i] == grid[j][i])
		{
		  grid_end[j][i] = grid[j][i];
		}
	      else if (grid_end[j][i] != grid[j][i])
		{
		  if (grid_end[j][i] == ' ' && grid[j][i] != ' ')
		    {
		      grid_end[j][i] = grid[j][i];
		    }
		  else if (grid_end[j][i] != ' ' && grid[j][i] == ' ')
		    {
		      //grid_end[j][i] = grid[j][i];
		    }
		  //Primary + Primary
		  //R + B = M
		  else if (grid_end[j][i] == 'R' && grid[j][i] == 'B')
		    {
		      grid_end[j][i] = 'M';
		    }
		  else if (grid_end[j][i] == 'B' && grid[j][i] == 'R')
		    {
		      grid_end[j][i] = 'M';
		    }
		  //G + R = Y
		  else if (grid_end[j][i] == 'G' && grid[j][i] == 'R')
		    {
		      grid_end[j][i] = 'Y';
		    }
		  else if (grid_end[j][i] == 'R' && grid[j][i] == 'G')
		    {
		      grid_end[j][i] = 'Y';
		    }
		  //G + B = C
		  else if (grid_end[j][i] == 'G' && grid[j][i] == 'B')
		    {
		      grid_end[j][i] = 'C';
		    }
		  else if (grid_end[j][i] == 'B' && grid[j][i] == 'G')
		    {
		      grid_end[j][i] = 'C';
		    }

		  //Secondary + Primary penyusun
		  //Y + R = R
		  else if (grid_end[j][i] == 'Y' && grid[j][i] == 'R')
		    {
		      grid_end[j][i] = 'R';
		    }
		  else if (grid_end[j][i] == 'R' && grid[j][i] == 'Y')
		    {
		      grid_end[j][i] = 'R';
		    }
		  //M + R = R
		  else if (grid_end[j][i] == 'M' && grid[j][i] == 'R')
		    {
		      grid_end[j][i] = 'R';
		    }
		  else if (grid_end[j][i] == 'R' && grid[j][i] == 'M')
		    {
		      grid_end[j][i] = 'R';
		    }
		  //Y + G = G
		  else if (grid_end[j][i] == 'Y' && grid[j][i] == 'G')
		    {
		      grid_end[j][i] = 'G';
		    }
		  else if (grid_end[j][i] == 'G' && grid[j][i] == 'Y')
		    {
		      grid_end[j][i] = 'G';
		    }
		  //C + G = G
		  else if (grid_end[j][i] == 'C' && grid[j][i] == 'G')
		    {
		      grid_end[j][i] = 'G';
		    }
		  else if (grid_end[j][i] == 'G' && grid[j][i] == 'C')
		    {
		      grid_end[j][i] = 'G';
		    }
		  //C + B = B
		  else if (grid_end[j][i] == 'C' && grid[j][i] == 'B')
		    {
		      grid_end[j][i] = 'B';
		    }
		  else if (grid_end[j][i] == 'B' && grid[j][i] == 'C')
		    {
		      grid_end[j][i] = 'B';
		    }
		  //M + B = B
		  else if (grid_end[j][i] == 'M' && grid[j][i] == 'B')
		    {
		      grid_end[j][i] = 'B';
		    }
		  else if (grid_end[j][i] == 'B' && grid[j][i] == 'M')
		    {
		      grid_end[j][i] = 'B';
		    }

		  //Secondary + Other Primary
		  //Y + B = W
		  else if (grid_end[j][i] == 'Y' && grid[j][i] == 'B')
		    {
		      grid_end[j][i] = 'W';
		    }
		  else if (grid_end[j][i] == 'B' && grid[j][i] == 'Y')
		    {
		      grid_end[j][i] = 'W';
		    }
		  //M + G = W
		  else if (grid_end[j][i] == 'M' && grid[j][i] == 'G')
		    {
		      grid_end[j][i] = 'W';
		    }
		  else if (grid_end[j][i] == 'G' && grid[j][i] == 'M')
		    {
		      grid_end[j][i] = 'W';
		    }
		  //C + M = W
		  else if (grid_end[j][i] == 'M' && grid[j][i] == 'C')
		    {
		      grid_end[j][i] = 'W';
		    }
		  else if (grid_end[j][i] == 'C' && grid[j][i] == 'M')
		    {
		      grid_end[j][i] = 'W';
		    }
		}
	    }
	}
    }

  //Hasil
  for (int i = 0; i < y; i++){
      printf ("|");
      for (int j = 0; j < x; j++){
	  printf ("%c", grid_end[j][i]);
	  printf ("|");
	}
      printf ("\n");

    }
  return 0;
}