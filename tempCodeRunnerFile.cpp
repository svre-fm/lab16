void randData(double *data, int N, int M){
    for(int i = 0; i < N*M; i++){
        *(data + i) = (rand()%101)/100.0;
    }
}
