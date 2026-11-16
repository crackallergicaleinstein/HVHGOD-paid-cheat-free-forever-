// FUN_1802876c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802876c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802876c0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 auStack_b8 [48];
  longlong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70 [3];
  int local_58;
  int local_54;
  undefined1 local_50 [16];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  plVar11 = (longlong *)
            (((((((((param_2 >> 8 & 0xff ^ (param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                    0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff
                  ) * 0x100000001b3 ^ param_2 >> 0x20 & 0xff) * 0x100000001b3 ^
                param_2 >> 0x28 & 0xff) * 0x100000001b3 ^ param_2 >> 0x30 & 0xff) * 0x100000001b3 ^
              param_2 >> 0x38) * 0x100000001b3 & DAT_180cd3d50) * 0x10 + DAT_180cd3d38);
  lVar7 = plVar11[1];
  if (lVar7 == DAT_180cd3d28) {
LAB_1802877c7:
    lVar7 = 0;
  }
  else {
    uVar1 = *(ulonglong *)(lVar7 + 0x10);
    while (param_2 != uVar1) {
      if (lVar7 == *plVar11) goto LAB_1802877c7;
      lVar7 = *(longlong *)(lVar7 + 8);
      uVar1 = *(ulonglong *)(lVar7 + 0x10);
    }
  }
  lVar13 = DAT_180cd3d28;
  if (lVar7 != 0) {
    lVar13 = lVar7;
  }
  local_78 = param_2;
  UVar8 = GetTickCount64();
  if (lVar13 != DAT_180cd3d28) {
    if (*(longlong *)(lVar13 + 0x18) != 0) {
    }
    if (UVar8 < *(ulonglong *)(lVar13 + 0x28)) {
    }
  }
  plVar11 = (longlong *)FUN_180289050();
  uVar1 = local_78;
  lVar7 = *plVar11;
  *(undefined1 *)(lVar7 + 0x20) = 1;
  *(ULONGLONG *)(lVar7 + 0x28) = UVar8 + 0x5dc;
  uVar12 = DAT_180c7df48;
  if (DAT_180c7df38 == 0) {
    local_88 = (longlong *)0x1808281d0;
    local_80 = 0x3c;
    DAT_180c7df38 = FUN_180451750(&local_88);
    if (DAT_180c7df38 == 0) goto LAB_180287a01;
  }
  iVar5 = (*(code *)DAT_180c7df38)(uVar12,uVar1);
  uVar12 = DAT_180c7df90;
  if (iVar5 < 1) {
LAB_180287a01:
    uVar1 = local_78;
    uVar12 = DAT_180c7df48;
    if (local_78 != 0) {
      if (DAT_180c7df40 == 0) {
        local_88 = (longlong *)0x180828190;
        local_80 = 0x3d;
        DAT_180c7df40 = FUN_180451750(&local_88);
        if (DAT_180c7df40 == 0) {
        }
      }
      (*(code *)DAT_180c7df40)(uVar12,uVar1,0);
    }
  }
  local_54 = 0;
  local_58 = 0;
  if (DAT_180c7dfa0 == 0) {
    local_88 = (longlong *)0x1808282f8;
    local_80 = 0x31;
    DAT_180c7dfa0 = FUN_180451750(&local_88);
    if (DAT_180c7dfa0 == 0) {
    }
  }
  cVar4 = (*(code *)DAT_180c7dfa0)(uVar12,iVar5,&local_54,&local_58);
  if (cVar4 == '\0') {
  }
  if (local_54 == 0) {
  }
  if (local_58 == 0) {
  }
  uVar6 = local_58 * local_54 * 4;
  local_50 = (undefined1  [16])0x0;
  local_40 = 0;
  if (uVar6 == 0) {
    local_50._8_8_ = 0;
    lVar13 = local_50._8_8_;
  }
  else {
    lVar9 = FUN_18015bca0((ulonglong)uVar6);
    local_50._0_8_ = lVar9;
    lVar13 = lVar9 + (ulonglong)uVar6;
    local_40 = lVar13;
    FUN_18063ab10(lVar9,0,uVar6);
    local_50._8_8_ = lVar13;
  }
  auVar3 = local_50;
  uVar12 = DAT_180c7df90;
  uVar2 = local_50._0_8_;
  if (DAT_180c7df88 == 0) {
    local_88 = (longlong *)0x1808282c0;
    local_80 = 0x31;
    DAT_180c7df88 = FUN_180451750(&local_88);
    if (DAT_180c7df88 == 0) goto LAB_1802879ef;
  }
  cVar4 = (*(code *)DAT_180c7df88)(uVar12,iVar5,uVar2,(int)lVar13 - auVar3._0_4_);
  if (cVar4 != '\0') {
    puVar10 = (undefined8 *)FUN_180437380(&local_88,local_50._0_8_,local_54,local_58);
    uVar12 = 0;
    if (local_70 != puVar10) {
      uVar12 = *puVar10;
      *puVar10 = 0;
    }
    plVar11 = *(longlong **)(lVar7 + 0x18);
    *(undefined8 *)(lVar7 + 0x18) = uVar12;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    plVar11 = local_88;
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      (**(code **)(*plVar11 + 0x10))();
    }
  }
LAB_1802879ef:
  FUN_180113710(local_50);
}



