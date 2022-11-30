#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main() {
    //uses density string
    string path = "Image/sadP.png", density = " _.,-=+:;cba!?0123456789$W#@Ñ";
    Mat imgGray = imread(path);
    cvtColor(imgGray, imgGray, COLOR_BGR2GRAY);
    resize(imgGray, imgGray, Size(100, 60));
    //imshow("Gray Image", imgGray);
    cout << "\n\n\n\n\n\n";
    for (int i = 0; i < imgGray.rows; i++) {
        for (int j = 0; j < imgGray.cols; j++) {
            //every 9 values we have a new text
            cout << density[floor(imgGray.at<uchar>(i, j)/9)];
        }
        cout << endl;
    }
    cout << "\n\n\n\n\n\n";
    waitKey(0);
    return 0;
}
