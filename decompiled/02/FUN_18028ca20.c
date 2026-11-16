// FUN_18028ca20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028ca20 */

undefined1 FUN_18028ca20(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 *_Buf1;
  ulonglong local_res8;
  undefined1 local_28 [32];
  
  bVar9 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 != 0) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (param_1 + 0x10 == 0) {
      bVar1 = false;
    }
    else {
      local_res8 = 0;
      cVar2 = FUN_1804514f0(&local_res8,param_1 + 0x10,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar8 = local_res8;
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if (!bVar1) {
      uVar8 = 0;
    }
    if (uVar8 != 0) {
      puVar5 = (undefined8 *)FUN_180454030(local_28,uVar8,0x100);
      bVar9 = true;
      _Buf1 = puVar5;
      if (0xf < (ulonglong)puVar5[3]) {
        _Buf1 = (undefined8 *)*puVar5;
      }
      lVar4 = puVar5[2];
      lVar6 = FUN_1801c56a0(_Buf1,lVar4);
      if (lVar6 != -1) {
        lVar4 = lVar4 - (lVar6 + 1);
        _Buf1 = (undefined8 *)((longlong)_Buf1 + lVar6 + 1);
      }
      if (lVar4 == 0x1c) {
        iVar3 = memcmp(_Buf1,"solidcolor_glowproperty.vmat",0x1c);
        if (iVar3 != 0) goto LAB_18028cb0e;
LAB_18028cb2a:
        uVar7 = 1;
        goto LAB_18028cb32;
      }
LAB_18028cb0e:
      if (lVar4 == 0x1e) {
        iVar3 = memcmp(_Buf1,"solidcolor_glowproperty.vmat_c",0x1e);
        if (iVar3 == 0) goto LAB_18028cb2a;
      }
    }
  }
  uVar7 = 0;
LAB_18028cb32:
  if (bVar9) {
    FUN_18015c010(local_28);
  }
  return uVar7;
}



