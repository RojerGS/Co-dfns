﻿MF(red_o){A t(r.r?r.r-1:0,dim4(1),z.v);DO(t.r,t.s[i]=r.s[i+1])
 I rc=(I)r.s[0];I zc=(I)cnt(t);if(!zc){t.v=scl(0);z=t;R;}
 if(!rc){t.v=ll.id(t.s);z=t;R;}
 if(1==rc){t.v=array(r.v,t.s);z=t;R;}
 if("add"==ll.nm){if(r.v.isbool())t.v=count(r.v,0).as(s32);
  else t.v=sum(r.v.as(f64),0);z=t;R;}
 if("mul"==ll.nm){t.v=product(r.v.as(f64),0);z=t;R;}
 if("min"==ll.nm){t.v=min(r.v,0);z=t;R;}
 if("max"==ll.nm){t.v=max(r.v,0);z=t;R;}
 if("and"==ll.nm){t.v=allTrue(r.v,0);z=t;R;}
 if("lor"==ll.nm){t.v=anyTrue(r.v,0);z=t;R;}
 t.v=r.v(rc-1,span);mapop(mfn,ll,p);
 DO(rc-1,mfn(t,A(t.r,t.s,r.v(rc-(i+2),span)),t,p))z=t;}
DF(red_o){if(l.r!=0&&(l.r!=1||l.s[0]!=1))err(5);if(!r.r)err(4);
 I lv=l.v.as(s32).scalar<I>();if((r.s[0]+1)<lv)err(5);
 I rc=(I)((1+r.s[0])-abs(lv));mapop(mfn,ll,p);
 A t(r.r,r.s,scl(0));t.s[0]=rc;if(!cnt(t)){z=t;R;}
 if(!lv){t.v=ll.id(t.s);z=t;R;}seq rng(rc);
 if(lv>=0){t.v=r.v(rng+((D)lv-1),span);
  DO(lv-1,mfn(t,A(t.r,t.s,r.v(rng+((D)lv-(i+2)),span)),t,p))
 }else{t.v=r.v(rng,span);
  DO(abs(lv)-1,mfn(t,A(t.r,t.s,r.v(rng+(D)(i+1),span)),t,p))}
 z=t;}