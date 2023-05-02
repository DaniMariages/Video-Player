
# Video Player

## Pre-rendered videos

A pre-rendered video is a sequence in a video game that is not interactive, interrupting the gameplay. Nowadays they are usually used to introduce the game or its story and these videos are much less used nowadays for the following reasons:

*   Pre-rendered videos take up more space.
*   Nowadays it is faster and easier to use real-time rendered video.
*   Videos rendered in real time can show changes that may have occurred in the story or modifications that the player may have made.

On the other hand these videos allow developers to deliver high-quality graphics and visual effects that are difficult or impossible to achieve in real-time, helping to create a more cinematic and emotionally resonant game world.

Let's see one example of a pre-rendered video:

### Final Fantasy VII

The intro scene of Final Fantasy VII is a prerendered video. As mentioned before, this technique was mostly used in older video games. Yet it can still be seen in introductions or endings of video games.

[![s-l600](https://user-images.githubusercontent.com/99950347/235755980-f05ccd45-d4e1-49ab-b69b-79e6f05f7d78.jpg)](https://www.youtube.com/watch?v=MFX594xk4A4&ab_channel=Marcus)


## OpenCV

OpenCV is a free computer vision library originally developed by Intel. OpenCV stands for Open Computer Vision. It offers algorithms that can be used to detect and recognize faces, identify objects, classify human actions in videos, track camera movements, track moving objects, extract 3D models of objects among many other options. This time we will use it only to play a video.

### Why OpenCV?

I decided to use OpenCV after trying other more complicated and longer methods. With OpenCV we have the advantage that it is already prepared to play a video in a very fast and easy way. 

## TO DOs

TODO 0: Download opencv_world470d.dll from this drive link and put it in the Game folder.

[Drive](https://drive.google.com/drive/folders/1E2reKN2OMKGYwkMO8R6Kh1hAZxfOvS1E?usp=sharing)

TODO 1: Open the video file you want to reproduce
```C++
VideoCapture video("Clip.mp4");
```

TODO 2: Save the video frames using de class Mat (Matrix)
```C++
Mat frame;
```
TODO 3: Create a loop for reading the video, when the video ends or a "esc" is pressed it will close
```C++
while (video.read(frame))
    {


    }
```

TODO 4: Use the imshow() function to give a name for the window and choose what you want to display, in this case the video frame
```C++
imshow("Video feed", frame);
```

TODO 5: Create a loop (if) using WaitKey() for stopping the video
```C++
    if (waitKey(25) >= 0)
    {
          break;
    }
```

TODO 6: Get width and height from the video we want to reproduce using video.get()
```C++
    int frameWidth = video.get(CAP_PROP_FRAME_WIDTH);
    int frameHeight = video.get(CAP_PROP_FRAME_HEIGHT);
```

TODO 7: Create a video righter from the class VideoWriter
```C++
 VideoWriter output("output.avi", VideoWriter::fourcc('M', 'J', 'P', 'G'), 60, Size(100, 100));
```

TODO 8: Write/Show every frame using de videowriter we created before
```C++
  output.write(frame);
```

## References

https://en.wikipedia.org/wiki/Cutscene#:~:text=Pre-made%20videos%20used%20in,as%20plain%20text%20and%20audio.

https://en.wikipedia.org/wiki/Full-motion_video

https://www.quora.com/Why-dont-video-games-use-pre-rendered-videos-as-cut-scenes-instead-of-loading-everything-to-make-one

https://www.quora.com/Why-are-video-game-cutscenes-often-rendered-instead-of-just-being-pre-made-videos-that-play

https://www.youtube.com/watch?v=MFX594xk4A4&ab_channel=Marcus

https://es.wikipedia.org/wiki/OpenCV

https://opencv.org/about/

https://www.youtube.com/watch?v=VIg_xQ5ud8s&ab_channel=tochiVision

https://www.youtube.com/watch?v=GyqENnu7cE8&ab_channel=ComputerVisionLab
