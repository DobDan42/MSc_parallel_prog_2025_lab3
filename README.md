# Lab-3
CC -Ofast -Rpass=loop-vectorize -Rpass-missed=loop-vectorize -Rpass-analysis=loop-vectorize matmat.cpp -o matmat
srun -p cpu --ntasks=1 --time=00:05:00 --mem=20G --reservation=<redacted> --cpus-per-task=4 ./matmat


Results:  

[<redacted> parallel-prog-2025-lab-3-DobDan42]$ ./cfd_euler  
The initialization process took 824160 operations (bytes moved).  
The initialization process took 413 milliseconds.  
The initialization had the bandwidth: 0.0018585  GB/s.  
The Left boundary process took 3264 operations (bytes moved).  
The Left boundary process took 1 milliseconds.  
The Left boundary process had the bandwidth: 0.00303984  GB/s.  
The Right boundary process took 6528 operations (bytes moved).  
The Right boundary process took 0 milliseconds.  
The Right boundary process bandwidth could not be determined due to the amount of time passed (0).  
The Bottom boundary process took 12928 operations (bytes moved).  
The Bottom boundary process took 0 milliseconds.  
The Bottom boundary process bandwidth could not be determined due to the amount of time passed (0).  
The Top boundary process took 12928 operations (bytes moved).  
The Top boundary process took 0 milliseconds.  
The Top boundary process bandwidth could not be determined due to the amount of time passed (0).  
The Interior process took 50482048 operations (bytes moved).  
The Interior process took 2 milliseconds.  
The Interior process had the bandwidth: 23.5075  GB/s.  
The Copy Back process took 1280000 operations (bytes moved).  
The Copy Back process took 0 milliseconds.  
The Copy Back process bandwidth could not be determined due to the amount of time passed (0).  
The Kinetic Energy Calculation process took 1120000 operations (bytes moved).  
The Kinetic Energy Calculation process took 0 milliseconds.  
The Kinetic Energy Calculation process bandwidth could not be determined due to the amount of time passed (0).  
Step 0 completed, total kinetic energy: 9825.76   
The results are correct.   
The WHOLE process took 75 milliseconds.  

