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
    //TODO 1: Open the video file you want to reproduce

    //TODO 2:Save the video frames using the class Mat (Matrix)


    //TODO 6: Get width and height from the video we want to reproduce using video.get()




    //TODO 7: Create a video writer from the class VideoWriter
    


    //TODO 3: Create a loop for reading the video, when the video ends or "esc" is pressed it will close
    while ()
    {
        //TODO 4: Use the imshow() function to give a name for the window and choose what you want to display, in this case the video frame

        //TODO 8: Write / Show every frame using the videowriter we created before
        

        //TODO 5: Create a loop(if) using WaitKey() for stopping the video

    }

    //Release video  writer and capture
    output.release();
    video.release();

    //Destroy the window
    destroyAllWindows();
}
