// FUN_1801c56a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c56a0 */

longlong FUN_1801c56a0(longlong param_1,longlong param_2,undefined8 param_3,byte *param_4,
                      longlong param_5)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  char local_118 [256];
  
  if ((param_5 == 0) || (param_2 == 0)) {
LAB_1801c5758:
    lVar3 = -1;
  }
  else {
    lVar4 = -1;
    if (param_2 + -1 != -1) {
      lVar4 = param_2 + -1;
    }
    if ((ulonglong)(lVar4 + 1 + param_5) < 0x10) {
      FUN_18063ab10(local_118,0,0x100);
      pbVar1 = param_4 + param_5;
      for (; param_4 != pbVar1; param_4 = param_4 + 1) {
        local_118[*param_4] = '\x01';
      }
      lVar3 = param_1 + lVar4;
      cVar2 = local_118[*(byte *)(param_1 + lVar4)];
      while (cVar2 == '\0') {
        if (lVar3 == param_1) goto LAB_1801c5758;
        pbVar1 = (byte *)(lVar3 + -1);
        lVar3 = lVar3 + -1;
        cVar2 = local_118[*pbVar1];
      }
      lVar3 = lVar3 - param_1;
    }
    else {
      lVar3 = thunk_FUN_1805f6d90(param_1,lVar4 + 1,param_4,param_5);
    }
  }
  return lVar3;
}



