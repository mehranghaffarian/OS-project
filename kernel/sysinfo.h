struct sysinfo {
    long uptime;
    unsigned long totalram;
    unsigned long freeram;
    unsigned short procs;
};

struct procInfo {
    int pid;
    int WaitingTime;
    int TurnAroundTime;
    int BurstTime;
};

