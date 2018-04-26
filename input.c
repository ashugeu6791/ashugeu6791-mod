void input(int car[],struct req requests[],int n,int N,int R,int location[][n]){
  int i,j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d",&location[i][j]);
    }
  }
  for(i=0;i<N;i++){
    scanf("%d",&car[i]);
  }
  for(i=0;i<R;i++){
    scanf("%d%d%d%d",&requests[i].src,&requests[i].dest,&requests[i].srtTime,&requests[i].endTime);
  }
}
