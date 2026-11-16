// FUN_1802e2c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e2c30 */

ulonglong FUN_1802e2c30(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float local_res20;
  float local_res24;
  longlong local_48;
  ulonglong uStack_40;
  
  fVar8 = 0.0;
  if (param_2 <= 0.0) {
    return 0;
  }
  uVar5 = 0;
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    lVar2 = *param_1;
    lVar4 = DAT_180bbadd0;
    uVar6 = uVar1;
    do {
      uVar7 = uVar5 + 1 + uVar6 >> 1;
      uStack_40 = uVar7;
      if (uVar1 < uVar7) {
        uStack_40 = uVar1;
      }
      lVar3 = DAT_180bbade0;
      if (DAT_180bbadc8 != lVar4) {
        lVar3 = *(longlong *)(lVar4 + -8);
      }
      if (lVar3 == 0) {
        local_res20 = fVar8;
        local_res24 = fVar8;
      }
      else {
        local_48 = lVar2;
        FUN_180430010(lVar3,&local_res20,&local_48);
        lVar4 = DAT_180bbadd0;
      }
      if (param_2 < local_res20) {
        uVar6 = uVar7 - 1;
        uVar7 = uVar5;
      }
      uVar5 = uVar7;
    } while (uVar5 < uVar6);
  }
  uVar1 = param_1[1];
  if (uVar1 < uVar5) {
    uVar5 = uVar1;
  }
  for (; ((uVar5 != 0 && (uVar5 < uVar1)) && ((*(byte *)(*param_1 + uVar5) & 0xc0) == 0x80));
      uVar5 = uVar5 - 1) {
  }
  return uVar5;
}



