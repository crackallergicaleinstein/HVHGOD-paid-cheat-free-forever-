// FUN_1802bdb50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bdb50 */

ulonglong FUN_1802bdb50(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  longlong lVar5;
  undefined8 *_Buf1;
  longlong *plVar6;
  undefined8 *_Buf2;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)*param_2;
  puVar8 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar5 = (longlong)puVar1 - (longlong)puVar8;
  sVar4 = -(lVar5 >> 0x3f);
  if (lVar5 / 0x28 == (param_2[1] - (longlong)puVar9) / 0x28) {
    for (; puVar8 != puVar1; puVar8 = puVar8 + 5) {
      _Buf2 = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        _Buf2 = (undefined8 *)*puVar9;
      }
      sVar2 = puVar8[2];
      _Buf1 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        _Buf1 = (undefined8 *)*puVar8;
      }
      if (sVar2 != puVar9[2]) goto LAB_1802bdc91;
      if (sVar2 != 0) {
        iVar3 = memcmp(_Buf1,_Buf2,sVar2);
        sVar4 = CONCAT44(extraout_var,iVar3);
        if (iVar3 != 0) goto LAB_1802bdc91;
      }
      sVar4 = (size_t)*(uint *)(puVar9 + 4);
      if (*(uint *)(puVar8 + 4) != *(uint *)(puVar9 + 4)) goto LAB_1802bdc91;
      puVar9 = puVar9 + 5;
    }
    plVar7 = param_2 + 3;
    sVar4 = param_2[5];
    plVar6 = param_1 + 3;
    if (0xf < (ulonglong)param_2[6]) {
      plVar7 = (longlong *)*plVar7;
    }
    sVar2 = param_1[5];
    if (0xf < (ulonglong)param_1[6]) {
      plVar6 = (longlong *)*plVar6;
    }
    if (sVar2 == sVar4) {
      if (sVar2 != 0) {
        iVar3 = memcmp(plVar6,plVar7,sVar2);
        sVar4 = CONCAT44(extraout_var_00,iVar3);
        if (iVar3 != 0) goto LAB_1802bdc91;
      }
      plVar7 = param_2 + 7;
      sVar4 = param_2[9];
      plVar6 = param_1 + 7;
      if (0xf < (ulonglong)param_2[10]) {
        plVar7 = (longlong *)*plVar7;
      }
      sVar2 = param_1[9];
      if (0xf < (ulonglong)param_1[10]) {
        plVar6 = (longlong *)*plVar6;
      }
      if (sVar2 == sVar4) {
        if (sVar2 != 0) {
          iVar3 = memcmp(plVar6,plVar7,sVar2);
          sVar4 = CONCAT44(extraout_var_01,iVar3);
          if (iVar3 != 0) goto LAB_1802bdc91;
        }
        return CONCAT71((int7)(sVar4 >> 8),1);
      }
    }
  }
LAB_1802bdc91:
  return sVar4 & 0xffffffffffffff00;
}



