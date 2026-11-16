// FUN_180418370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180418370 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180418370(undefined8 param_1,undefined1 (*param_2) [16],undefined8 param_3,
                  undefined8 param_4,undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 (*local_c0) [16];
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  longlong local_90;
  char *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_a8 = param_7;
  local_58 = (undefined1  [16])0x0;
  local_47 = 0;
  local_43 = 0;
  local_41 = 0;
  local_70 = *param_5;
  local_68 = *(undefined4 *)(param_5 + 1);
  local_64 = *param_6;
  local_5c = *(undefined4 *)(param_6 + 1);
  local_48 = 2;
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  *(undefined8 *)param_2[2] = 0;
  *(undefined8 *)(param_2[2] + 8) = 0;
  *(undefined8 *)param_2[3] = 0;
  *(undefined1 (*) [16])(param_2[3] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_2[4] + 8) = 0;
  *(undefined4 *)param_2[5] = 0;
  *(undefined8 *)(param_2[5] + 4) = 0;
  *(undefined8 *)(param_2[5] + 0xc) = 0;
  *(undefined8 *)(param_2[6] + 4) = 0;
  *(undefined8 *)(param_2[6] + 0xc) = 0;
  *(undefined8 *)(param_2[7] + 4) = 0;
  *(undefined8 *)(param_2[7] + 0xc) = 0;
  *(undefined8 *)(param_2[8] + 4) = 0;
  *(undefined8 *)(param_2[8] + 0xc) = 0;
  *(undefined8 *)(param_2[9] + 4) = 0;
  *(undefined8 *)(param_2[9] + 0xc) = 0;
  *(undefined8 *)(param_2[10] + 4) = 0;
  *(undefined4 *)(param_2[10] + 0xc) = 0;
  *(undefined8 *)param_2[0xb] = 0;
  *(undefined4 *)(param_2[0xb] + 8) = 0;
  *(undefined8 *)(param_2[0xb] + 0xc) = 0;
  *(undefined8 *)(param_2[0xc] + 4) = 0;
  *(undefined8 *)(param_2[0xc] + 0xc) = 0;
  *(undefined8 *)(param_2[0xd] + 4) = 0;
  *(undefined8 *)(param_2[0xd] + 0xc) = 0;
  *(undefined8 *)(param_2[0xe] + 4) = 0;
  *(undefined8 *)(param_2[0xe] + 0xc) = 0;
  *(undefined8 *)(param_2[0xf] + 4) = 0;
  *(undefined8 *)(param_2[0xf] + 0xc) = 0;
  local_a0 = DAT_180c64060;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1809c0fc8;
  lVar2 = DAT_1808da460;
  if ((DAT_1809c0fc8 == DAT_1808da460) && (pcVar6 = (code *)DAT_180c7d828, DAT_180c7d828 != 0))
  goto LAB_1804185f3;
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c7d830)) {
  }
  local_78 = &DAT_1809c0fe0;
  iVar3 = FUN_1805f68d0(&DAT_1809c0fe0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809c102c == 0x7fffffff) {
    DAT_1809c102c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar7 = 1000;
  if (DAT_1809c0fc8 == lVar2) {
    if ((DAT_180c7d828 == 0) && (DAT_180c7d830 <= UVar4)) goto LAB_180418553;
  }
  else {
    DAT_1809c0fd0 = 1000;
LAB_180418553:
    lVar5 = -1;
    do {
      local_90 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = local_90;
    } while ("client.dll:48895424??48894C24??55535657415441564157488DAC24????????B8????0000"[lVar1]
             != '\0');
    local_98 = "client.dll:48895424??48894C24??55535657415441564157488DAC24????????B8????0000";
    local_88 = "patterns::trace_ray";
    local_80 = 0x13;
    DAT_180c7d828 = FUN_1800e5d20(&local_88,&local_98);
    DAT_1809c0fc8 = lVar2;
    DAT_180c7d830 = 0xffffffffffffffff;
    if (DAT_180c7d828 == 0) {
      DAT_180c7d830 = DAT_1809c0fd0 + UVar4;
      uVar7 = 60000;
      if (DAT_1809c0fd0 < 60000) {
        uVar7 = DAT_1809c0fd0 * 2;
      }
    }
    param_7 = local_a8;
    DAT_1809c0fd0 = uVar7;
  }
  pcVar6 = (code *)DAT_180c7d828;
  FUN_1805f68fc(&DAT_1809c0fe0);
  if (pcVar6 == (code *)0x0) {
  }
LAB_1804185f3:
  local_c8 = param_7;
  local_c0 = param_2;
  (*pcVar6)(local_a0,&local_70,param_3,param_4);
}



