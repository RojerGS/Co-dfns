﻿NM(trn,"trn",0,0,MT ,MFD,DFD,MT ,MT )
MF(trn_f){z.r=r.r;DO(r.r,z.s[i]=r.s[r.r-(i+1)])
 switch(r.r){CS(0,z.v=r.v)CS(1,z.v=r.v)CS(2,z.v=r.v.T())
  CS(3,z.v=reorder(r.v,2,1,0))CS(4,z.v=reorder(r.v,3,2,1,0))}}
DF(trn_f){I lv[4];if(l.r>1||cnt(l)!=r.r)err(5);
 l.v.as(s32).host(lv);DO(r.r,if(lv[i]<0||lv[i]>=r.r)err(4))
 U8 f[]={0,0,0,0};DO(r.r,f[lv[i]]=1)
 U8 t=1;DO(r.r,if(t&&!f[i])t=0;else if(!t&&f[i])err(5))
 DO(r.r,if(!f[i])err(16))
 z.r=r.r;DO(r.r,z.s[r.r-(lv[i]+1)]=r.s[r.r-(i+1)])
 I s[4];DO(r.r,s[r.r-(lv[i]+1)]=r.r-(i+1))
 switch(r.r){CS(0,z.v=r.v)CS(1,z.v=r.v)
  CS(2,z.v=reorder(r.v,s[0],s[1]))
  CS(3,z.v=reorder(r.v,s[0],s[1],s[2]))
  CS(4,z.v=reorder(r.v,s[0],s[1],s[2],s[3]))}}
