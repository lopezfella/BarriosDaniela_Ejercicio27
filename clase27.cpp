#include <iostream>
#include <fstream>
using namespace std;

*/guiado del respositorio del profesor*/

void explicito(float w, float x0, float xf, float dx, string filename);
void implicito(float w, float x0, float xf, float dx, string filename);

int main(){
    float w = 0.1;
    float x0 = 0.0;
    float xf = 1.0/w;
    float dx = 0.1/w;
    explicito(w, x0, xf, dx, "dx1_explicito.dat");
    explicito(w, x0, xf, dx, "dx2_explicito.dat");
    explicito(w, x0, xf, dx, "dx3_explicito.dat");
    implicito(w, x0, xf, dx, "dx1_implicito.dat");
    implicito(w, x0, xf, dx, "dx2_implicito.dat");
    implicito(w, x0, xf, dx, "dx3_implicito.dat");
    return 0;
    
}

void explicito(float w, float x0, float xf, float dx, string filename){
  float x=x0;
  float y=1.0;
  ofstream outfile;
  outfile.open(filename);

  while(x<xf){    
    outfile << x << " " << y << endl;
    y = y - dx*w*y;
    x = x + dx;
  }
  outfile.close();
}

void implicito(float w, float x0, float xf, float dx, string filename){
  float x=x0;
  float y=1.0;
  ofstream outfile;
  outfile.open(filename);

  while(x<xf){    
    outfile << x << " " << y << endl;
    y = y/(1+dx*w);
    x = x + dx;
  }
  outfile.close();
}
