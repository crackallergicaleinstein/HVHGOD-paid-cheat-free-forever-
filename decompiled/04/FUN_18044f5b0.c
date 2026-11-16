// FUN_18044f5b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044f5b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044f5b0(undefined8 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  undefined1 auStack_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_88 = &DAT_1808e4e90;
  iVar3 = FUN_1805f68d0(&DAT_1808e4e90);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e4edc == 0x7fffffff) {
    DAT_1808e4edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_78 = *param_1;
  uStack_70 = param_1[1];
  uVar4 = FUN_1802c7200(local_68,&local_78,0x300);
  pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(uVar4,&DAT_180812948,1);
  local_48 = *pauVar5;
  auStack_38 = pauVar5[1];
  (*pauVar5)[0] = 0;
  *(undefined8 *)pauVar5[1] = 0;
  *(undefined8 *)(pauVar5[1] + 8) = 0xf;
  FUN_18015c010(local_68);
  puVar7 = local_48;
  if (((ulonglong)auStack_38._8_8_ < 0x10) ||
     (puVar7 = (undefined1 *)local_48._0_8_, (undefined1 *)local_48._0_8_ != (undefined1 *)0x0)) {
    puVar6 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar6;
    puVar6 = (undefined1 *)FUN_1803b0a60();
    *puVar6 = 1;
    FUN_1800a9e50(1,puVar7);
    puVar7 = (undefined1 *)FUN_1803b0a60();
    *puVar7 = uVar1;
  }
  FUN_18044f500();
  lVar9 = DAT_180c62be0;
  if (DAT_180c62be0 != 0) {
    puVar7 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar7;
    puVar7 = (undefined1 *)FUN_1803b0a60();
    *puVar7 = 1;
    cVar2 = FUN_1804513c0(lVar9,1,2);
    if (cVar2 == '\0') {
      puVar7 = (undefined1 *)FUN_1803b0a60();
      *puVar7 = uVar1;
    }
    else {
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      cVar2 = FUN_18044fce0(lVar9);
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      puVar7 = (undefined1 *)FUN_1803b0a60();
      *puVar7 = uVar1;
      if (cVar2 != '\0') goto LAB_18044f75f;
    }
    LOCK();
    DAT_180bbec8e = 1;
    UNLOCK();
    LOCK();
    DAT_180c62be0 = 0;
    UNLOCK();
    FUN_1800a9e50(2,"CS2 console output unavailable; events retained in diagnostics.");
  }
LAB_18044f75f:
  FUN_18015c010(local_48);
  FUN_1805f68fc(&DAT_1808e4e90);
}



