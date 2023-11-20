# include <iostream>

int parallelogram_area(int &, int &){
    int area = base * height;
    return area;
}

int main(){
    int area = parallelogram_area(9, 11);
    std::cout << "The area of the parallelogram is " << area << std::endl;
    return 0;
}