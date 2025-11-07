#include<iostream>
using namespace std;

class matrix{
    private:
    int rows;
    int cols;
    int mat[10][10];

    public:

    matrix(int rows,int cols){
        this->rows=rows;
        this->cols=cols;
    }

    void creatematrix(){
      cout << "Enter elemets of matrix "<< rows << " X " << cols;
      for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << "enter element "<<i+1<<" X "<<j+1;
            cin >> mat[i][j];
        }
      }
    }

    void display(){
          cout << "\nMatrix elements are:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    int findElement(int row,int col){
        if(row>0 && row <this->rows && col > 0 && col < this->cols){
            return mat[row][col];
        }
        else{
            cout << "Invalid rows and colums" <<endl;
            return -1;
        }
    }

};

int main(){

    matrix m1(2,2);
    m1.creatematrix();
    m1.display();
    cout << m1.findElement(1,1);

    return 0;
}