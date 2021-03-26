# A Tale of Two Threads

![Expected output](https://i.imgur.com/KmI8Dju.png)

This was a quick experiment inspired by my latest reading in [Operating System Concepts](https://www.amazon.com/Operating-System-Concepts-Abraham-Silberschatz-ebook/dp/B07CVKH7BD), which touches on concepts of multiprocess computing and threaded processing. At a high level, the program:

1. Creates two threads.
2. Commands those threads to loop at different fixed intervals.
3. Outputs a message from each thread every time it completes a loop.

By setting one thread at an interval of .5 seconds and another thread at an interval of 1 second, the program demonstrates that both threads are running concurrently (neat!). In all, this exercise was surprisingly painless, though I imagine a portable version of this code would be quite a bit hairier if the C++11 `thread` module was unavailable.
