void display(int car[],int n,struct req requests[],int N,int R,int location[][n]){
  int i,j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ",location[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(i=0;i<N;i++){
    printf("%d ",car[i]);
  }
  printf("\n");
  for(i=0;i<R;i++){
    printf("%d %d %d %d\n",requests[i].src,requests[i].dest,requests[i].srtTime,requests[i].endTime);
  }
}
