// FUN_1802c7200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c7200 */

undefined1 (*) [16]
FUN_1802c7200(undefined1 (*param_1) [16],longlong *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  uVar1 = param_2[1];
  uVar5 = param_3;
  if (uVar1 < param_3) {
    uVar5 = uVar1;
  }
  FUN_1800f5540(0,uVar5,param_3,param_4,1,param_1);
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  for (; ((param_3 != 0 && (param_3 < uVar1)) && ((*(byte *)(*param_2 + param_3) & 0xc0) == 0x80));
      param_3 = param_3 - 1) {
  }
  pbVar7 = (byte *)*param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  pbVar6 = pbVar7 + param_3;
  do {
    if (pbVar7 == pbVar6) {
      lVar2 = *(longlong *)param_1[1];
      while( true ) {
        if (lVar2 == 0) {
          return param_1;
        }
        uVar1 = *(ulonglong *)(param_1[1] + 8);
        pauVar3 = param_1;
        if (0xf < uVar1) {
          pauVar3 = *(undefined1 (**) [16])*param_1;
        }
        if (pauVar3[-1][lVar2 + 0xf] != ' ') break;
        *(longlong *)param_1[1] = lVar2 + -1;
        pauVar3 = param_1;
        if (0xf < uVar1) {
          pauVar3 = *(undefined1 (**) [16])*param_1;
        }
        pauVar3[-1][lVar2 + 0xf] = 0;
        lVar2 = *(longlong *)param_1[1];
      }
      return param_1;
    }
    bVar4 = *pbVar7;
    if ((bVar4 == 0x5e) || (bVar4 < 0x21)) {
      if (*(longlong *)param_1[1] != 0) {
        pauVar3 = param_1;
        if (0xf < *(ulonglong *)(param_1[1] + 8)) {
          pauVar3 = *(undefined1 (**) [16])*param_1;
        }
        if (pauVar3[-1][*(longlong *)param_1[1] + 0xf] != ' ') {
          bVar4 = 0x20;
          goto LAB_1802c72ca;
        }
      }
    }
    else if (bVar4 != 0x7f) {
LAB_1802c72ca:
      FUN_18015af80(param_1,bVar4);
    }
    pbVar7 = pbVar7 + 1;
  } while( true );
}



