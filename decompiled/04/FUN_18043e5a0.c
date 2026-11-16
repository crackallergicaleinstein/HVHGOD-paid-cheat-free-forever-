// FUN_18043e5a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043e5a0 */

ulonglong FUN_18043e5a0(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  float fVar7;
  int local_38 [2];
  undefined1 local_30 [40];
  
  lVar2 = *param_1;
  piVar6 = (int *)(lVar2 + 0x68);
  piVar1 = piVar6 + *(longlong *)(lVar2 + 0xe8);
  for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    if (*piVar6 == param_2) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0xe8) >> 8),1);
    }
  }
  local_38[0] = param_2;
  cVar3 = FUN_18043a1a0(lVar2,param_2);
  plVar5 = (longlong *)FUN_18043f940(param_1[1] + 0x60,local_30,local_38);
  *(char *)(*plVar5 + 0x14) = cVar3;
  if (cVar3 == '\0') {
    plVar5 = (longlong *)FUN_18043f110(param_1[1] + 0x20,local_30,local_38);
    *(undefined4 *)(*plVar5 + 0x14) = 0;
    return (ulonglong)plVar5 & 0xffffffffffffff00;
  }
  fVar7 = *(float *)param_1[2];
  plVar5 = (longlong *)FUN_18043f110(param_1[1] + 0x20,local_30,local_38);
  *(float *)(*plVar5 + 0x14) = fVar7 + *(float *)(*plVar5 + 0x14);
  plVar5 = (longlong *)FUN_18043f110(param_1[1] + 0x20,local_30,local_38);
  fVar7 = 0.4;
  if (*(float *)(*plVar5 + 0x14) < 0.4) {
    return (ulonglong)plVar5 & 0xffffffffffffff00;
  }
  plVar5 = (longlong *)FUN_18043f110(param_1[1] + 0x20,local_30,local_38);
  fVar7 = *(float *)(*plVar5 + 0x14) - fVar7;
  iVar4 = (int)(fVar7 / 0.03);
  return CONCAT71((int7)(CONCAT44((int)((ulonglong)param_1[2] >> 0x20),iVar4) >> 8),
                  (int)((fVar7 - *(float *)param_1[2]) / 0.03) < iVar4);
}



