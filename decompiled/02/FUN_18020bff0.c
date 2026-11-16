// FUN_18020bff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020bff0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18020bff0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_158 [32];
  longlong local_138;
  char *local_130;
  ulonglong local_128;
  undefined *local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  char local_f8 [8];
  longlong lStack_f0;
  undefined1 local_e8 [2] [16];
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [56];
  undefined8 local_60;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  local_118 = (undefined *)0xa05181ee77d57a06;
  local_e8[0]._8_8_ = 0xa05181ee77d57a06;
  local_e8[0]._0_8_ = 0xdb35e39b27e1c185;
  builtin_strncpy(local_f8,"_png",5);
  local_f8[5] = '\0';
  local_f8[6] = '\0';
  local_f8[7] = '\0';
  lStack_f0 = 0;
  local_138 = param_2[2];
  uVar8 = 0xffffffffffffffff;
  do {
    local_128 = uVar8 + 1;
    lVar7 = uVar8 + 1;
    uVar8 = local_128;
  } while (local_f8[lVar7] != '\0');
  if (0x7fffffffffffffffU - local_138 < local_128) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar9 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  local_130 = local_f8;
  FUN_18015a9c0(local_58,local_138,param_3,puVar9);
  local_110 = (undefined1  [16])0x0;
  uVar12 = 0;
  local_100 = 0;
  local_118 = &DAT_180cc9e00;
  iVar4 = FUN_1805f68d0(&DAT_180cc9e00);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e4c == 0x7fffffff) {
    DAT_180cc9e4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  pauVar5 = (undefined1 (*) [16])FUN_18020cfe0(extraout_XMM0_Qa,local_e8,local_58);
  lVar7 = 0;
  lVar13 = 0;
  if (&local_110 == pauVar5) {
    lVar11 = local_110._8_8_;
    lVar14 = local_110._0_8_;
  }
  else {
    lVar7 = *(longlong *)*pauVar5;
    lVar13 = *(longlong *)(*pauVar5 + 8);
    local_110 = *pauVar5;
    uVar12 = *(undefined8 *)pauVar5[1];
    *(undefined8 *)*pauVar5 = 0;
    *(undefined8 *)(*pauVar5 + 8) = 0;
    *(undefined8 *)pauVar5[1] = 0;
    lVar11 = lVar13;
    lVar14 = lVar7;
    local_100 = uVar12;
  }
  FUN_180113710(local_e8);
  FUN_1805f68fc(&DAT_180cc9e00);
  plVar6 = (longlong *)FUN_18020fef0(&DAT_180cc9d70,local_e8,param_2);
  if (lVar7 == lVar13) {
    *(undefined1 *)(*(longlong *)(*plVar6 + 0x30) + 0x10) = 4;
  }
  else {
    *(undefined1 *)(*(longlong *)(*plVar6 + 0x30) + 0x10) = 1;
    local_e8[0] = (undefined1  [16])0x0;
    puVar9 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar9 = (undefined8 *)*param_2;
    }
    uVar10 = 0xcbf29ce484222325;
    uVar8 = 0;
    if (param_2[2] != 0) {
      do {
        uVar10 = (uVar10 ^ *(byte *)((longlong)puVar9 + uVar8)) * 0x100000001b3;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulonglong)param_2[2]);
    }
    FUN_180177b00(&DAT_180cc9d70,local_f8,param_2,uVar10);
    if (lStack_f0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa8dc("invalid unordered_map<K, T> key");
    }
    if (*(longlong *)(lStack_f0 + 0x38) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lStack_f0 + 0x38) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_c0 = *(undefined8 *)*(undefined1 (*) [16])(lStack_f0 + 0x30);
    plVar6 = *(longlong **)(lStack_f0 + 0x38);
    local_e8[0] = *(undefined1 (*) [16])(lStack_f0 + 0x30);
    local_c8 = &DAT_180cc9bb0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_100 = 0;
    local_110 = ZEXT816(0);
    local_60 = 0;
    local_b8 = plVar6;
    local_b0 = lVar14;
    local_a8 = lVar11;
    local_a0 = uVar12;
    local_60 = FUN_180211200(local_98,&local_c8);
    FUN_180454f00(&local_118,local_98);
    puVar3 = local_118;
    if (local_118 != (undefined *)0x0) {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      FUN_1804551e0(&local_118,puVar3,2);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
    }
    FUN_180113710(&local_b0);
    FUN_1800efed0(&local_c0);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
  }
  FUN_180113710(local_110);
  FUN_18015c010(local_58);
}



