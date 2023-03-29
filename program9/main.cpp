/*******************************************************************
 * @name main
 * @brief This function creat
 * @param takes in the country and score from the user
 * @retval returns the scores in decending order if asked
*******************************************************************/
#include <iostream>
#include <array>
#include <random>
#include <fstream>
#include <string>
using namespace std;
/*
for each pixel (Px, Py) on the screen do
    x0 := scaled x coordinate of pixel (scaled to lie in the Mandelbrot X scale (-2.00, 0.47))
    y0 := scaled y coordinate of pixel (scaled to lie in the Mandelbrot Y scale (-1.12, 1.12))
    x := 0.0
    y := 0.0
    iteration := 0
    max_iteration := 1000
    while (x*x + y*y ≤ 2*2 AND iteration < max_iteration) do
        xtemp := x*x - y*y + x0
        y := 2*x*y + y0
        x := xtemp
        iteration := iteration + 1
    
    color := palette[iteration]
    plot(Px, Py, color)
    */
int main()
{
  float x_grid = 4571;
  float y_grid = 8000;
  float x = 0;
  float x_temp;
  float y = 0;
  float iteration = 0;
  float max_iteration = 1000;

  unsigned char file_header[14] = {'B', 'M', 0x00, 0x00, 0x00, 0x00,0x00, 0x00,
                                  0x00, 0x00,0x00, 0x00,0x00, 0x00};
  unsigned char dib_header[40] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
                                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  int i;
  srand(time(nullptr));
  int num = rand() % 3 + 1;

  string image_name = "bitmap_" + to_string(num) + ".bmp";
  ofstream file(image_name, ios::binary);
  if (!file.is_open()) {
        cout << "file failed to open" << endl;
        return 1;
  }

  //push file header to file
  for(i = 0; i < 14; i ++){
    file << file_header[i];
    cout << file_header[i];
  }

  //push dib header to file
  for(i = 0; i < 40; i ++){
    file << dib_header[i];
    cout << dib_header[i];
  }


  file << 
  cout << 


  while (x*x + y*y <= 2*2 && iteration < max_iteration){
    x_temp = x*x - y*y + x_grid;
    y = 2*x*y + y_grid;
    x = x_temp;
    iteration += 1;
  }

  file.close();
  return 0;
}
