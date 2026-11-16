// FUN_18035de60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035de60 */

ulonglong * FUN_18035de60(ulonglong *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res8;
  uint uStackX_c;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = CONCAT44(uStackX_c,local_res8) & 0xffffff00ffffffff;
    return param_1;
  }
  lVar2 = FUN_18017ea70();
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  if ((ulonglong)param_3 + param_2 != 0) {
    local_res8 = 0;
    cVar1 = FUN_1804514f0(&local_res8,(ulonglong)param_3 + param_2,4);
    if (cVar1 != '\0') {
      uStackX_c = CONCAT31(uStackX_c._1_3_,1);
      goto LAB_18035dec4;
    }
  }
  uStackX_c = uStackX_c & 0xffffff00;
LAB_18035dec4:
  lVar2 = FUN_18017ea70();
  if (*(int *)(lVar2 + 4) != 0) {
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
  }
  *param_1 = CONCAT44(uStackX_c,local_res8);
  return param_1;
}



