// FUN_1806275a4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806275a4 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1806275a4(longlong *param_1,undefined8 param_2,uint param_3,char *param_4,int param_5,
                  undefined8 param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)local_38;
  iVar3 = param_5;
  if (0 < param_5) {
    sVar4 = __strncnt(param_4,(longlong)param_5);
    iVar2 = (int)sVar4;
    iVar3 = iVar2 + 1;
    if (param_5 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar2 = FUN_18062b5a8(param_8,(-(param_9 != 0) & 8U) + 1,param_4,iVar3);
  puVar11 = auStack_88;
  if (iVar2 == 0) goto LAB_1806278af;
  uVar5 = (longlong)iVar2 * 2 + 0x10;
  uVar5 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar5) & uVar5;
  if (uVar5 == 0) {
    puVar8 = (undefined4 *)0x0;
    puVar11 = auStack_88;
LAB_180627895:
    if (puVar8 == (undefined4 *)0x0) goto LAB_1806278af;
  }
  else {
    if (uVar5 < 0x401) {
      uVar7 = uVar5 + 0xf;
      if (uVar7 <= uVar5) {
        uVar7 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar7 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar1;
      puVar12 = (undefined4 *)((longlong)local_38 + lVar1);
      puVar8 = (undefined4 *)0x0;
      puVar11 = auStack_88 + lVar1;
      if (puVar12 == (undefined4 *)0x0) goto LAB_180627895;
      *puVar12 = 0xcccc;
LAB_1806276b0:
      puVar8 = puVar12 + 4;
      puVar10 = puVar9;
    }
    else {
      puVar12 = (undefined4 *)_malloc_base(uVar5);
      puVar10 = auStack_88;
      puVar9 = auStack_88;
      puVar8 = (undefined4 *)0x0;
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = 0xdddd;
        goto LAB_1806276b0;
      }
    }
    puVar11 = puVar10;
    if (puVar8 == (undefined4 *)0x0) goto LAB_180627895;
    *(int *)(puVar10 + 0x28) = iVar2;
    *(undefined4 **)(puVar10 + 0x20) = puVar8;
    *(undefined8 *)(puVar10 + -8) = 0x1806276da;
    iVar3 = FUN_18062b5a8(param_8,1,param_4,iVar3);
    if (iVar3 == 0) goto LAB_180627895;
    *(undefined8 *)(puVar10 + 0x40) = 0;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(undefined4 *)(puVar10 + 0x28) = 0;
    *(undefined8 *)(puVar10 + 0x20) = 0;
    *(undefined8 *)(puVar10 + -8) = 0x18062770d;
    iVar3 = FUN_180621ad0(param_2,param_3,puVar8,iVar2);
    if (iVar3 == 0) goto LAB_180627895;
    if ((param_3 & 0x400) == 0) {
      uVar5 = (longlong)iVar3 * 2 + 0x10;
      uVar5 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar5) & uVar5;
      if (uVar5 == 0) {
        puVar12 = (undefined4 *)0x0;
LAB_180627878:
        if (puVar12 != (undefined4 *)0x0) {
LAB_18062787d:
          if (puVar12[-4] == 0xdddd) {
            *(undefined8 *)(puVar11 + -8) = 0x18062788e;
            FUN_180621380();
          }
        }
      }
      else {
        if (uVar5 < 0x401) {
          uVar7 = uVar5 + 0xf;
          if (uVar7 <= uVar5) {
            uVar7 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar10 + -8) = 0x1806277b0;
          lVar1 = -(uVar7 & 0xfffffffffffffff0);
          puVar11 = puVar10 + lVar1;
          puVar6 = (undefined4 *)(puVar10 + lVar1 + 0x50);
          if (puVar6 == (undefined4 *)0x0) goto LAB_18062789c;
          *puVar6 = 0xcccc;
          puVar10 = puVar10 + lVar1;
LAB_1806277de:
          puVar12 = puVar6 + 4;
          puVar11 = puVar10;
        }
        else {
          *(undefined8 *)(puVar10 + -8) = 0x1806277ce;
          puVar6 = (undefined4 *)_malloc_base();
          puVar12 = (undefined4 *)0x0;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0xdddd;
            goto LAB_1806277de;
          }
        }
        if (puVar12 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar11 + 0x40) = 0;
          *(undefined8 *)(puVar11 + 0x38) = 0;
          *(undefined8 *)(puVar11 + 0x30) = 0;
          *(int *)(puVar11 + 0x28) = iVar3;
          *(undefined4 **)(puVar11 + 0x20) = puVar12;
          *(undefined8 *)(puVar11 + -8) = 0x180627814;
          iVar2 = FUN_180621ad0(param_2,param_3,puVar8,iVar2);
          if (iVar2 == 0) goto LAB_180627878;
          *(undefined8 *)(puVar11 + 0x38) = 0;
          *(undefined8 *)(puVar11 + 0x30) = 0;
          if (param_7 == 0) {
            *(undefined4 *)(puVar11 + 0x28) = 0;
            *(undefined8 *)(puVar11 + 0x20) = 0;
            *(undefined8 *)(puVar11 + -8) = 0x180627842;
            iVar3 = FUN_18062b638(param_8,0,puVar12,iVar3);
            if (iVar3 == 0) goto LAB_180627878;
          }
          else {
            *(int *)(puVar11 + 0x28) = param_7;
            *(undefined8 *)(puVar11 + 0x20) = param_6;
            *(undefined8 *)(puVar11 + -8) = 0x18062785c;
            iVar3 = FUN_18062b638(param_8,0,puVar12,iVar3);
            if (iVar3 == 0) goto LAB_18062787d;
          }
          if (puVar12[-4] == 0xdddd) {
            *(undefined8 *)(puVar11 + -8) = 0x180627873;
            FUN_180621380();
          }
        }
      }
    }
    else if (param_7 != 0) {
      if (iVar3 <= param_7) {
        *(undefined8 *)(puVar10 + 0x40) = 0;
        *(undefined8 *)(puVar10 + 0x38) = 0;
        *(undefined8 *)(puVar10 + 0x30) = 0;
        *(int *)(puVar10 + 0x28) = param_7;
        *(undefined8 *)(puVar10 + 0x20) = param_6;
        *(undefined8 *)(puVar10 + -8) = 0x180627765;
        iVar3 = FUN_180621ad0(param_2,param_3,puVar8,iVar2);
        if (iVar3 != 0) goto LAB_18062789c;
      }
      goto LAB_180627895;
    }
  }
LAB_18062789c:
  if (puVar8[-4] == 0xdddd) {
    *(undefined8 *)(puVar11 + -8) = 0x1806278ad;
    FUN_180621380();
  }
LAB_1806278af:
  *(undefined **)(puVar11 + -8) = &UNK_1806278bb;
}



