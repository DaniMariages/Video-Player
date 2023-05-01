
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/video/video.hpp>

#include<iostream>
#include<conio.h>
int main(void) {

    cv::VideoCapture video("Clip.mp4");
    
    if (!video.isOpened()) return -1;

    cv::Mat frame;

    int frameWidth = video.get(cv::CAP_PROP_FRAME_WIDTH);
    int frameHeight = video.get(cv::CAP_PROP_FRAME_HEIGHT);

    cv::VideoWriter output("output.avi", cv::VideoWriter::fourcc('M', 'J', 'P', 'G'), 60, cv::Size(100, 100));

    while (video.read(frame))
    {
        cv::imshow("Video feed", frame);

        output.write(frame);

        if (cv::waitKey(25) >= 0)
        {
            break;
        }

    }

    output.release();  
    video.release();

    cv::destroyAllWindows();

    return(0);
}