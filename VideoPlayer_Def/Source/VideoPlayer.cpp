#include "VideoPlayer.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/video/video.hpp"

#include <iostream>

using namespace cv;
using namespace std;


VideoPlayer::VideoPlayer()
{
    VideoCapture video("Clip.mp4");

    Mat frame;

    int frameWidth = video.get(CAP_PROP_FRAME_WIDTH);
    int frameHeight = video.get(CAP_PROP_FRAME_HEIGHT);

    VideoWriter output("output.avi", VideoWriter::fourcc('M', 'J', 'P', 'G'), 60, Size(100, 100));

    while (video.read(frame))
    {
        imshow("Video feed", frame);

        output.write(frame);

        if (waitKey(25) >= 0)
        {
            break;
        }

    }

    output.release();
    video.release();

    destroyAllWindows();
}
