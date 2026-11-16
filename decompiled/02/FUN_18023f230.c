// FUN_18023f230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18023f230 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18023f230(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
                  undefined4 *param_9)

{
  int iVar1;
  short sVar2;
  undefined1 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_1708 [32];
  undefined **local_16e8;
  char *local_16e0;
  char *local_16d8;
  undefined4 *local_16d0;
  undefined4 *local_16c8;
  undefined4 local_16c0;
  undefined1 *local_16b8;
  int local_16b0;
  longlong local_16a8;
  undefined1 local_16a0;
  undefined8 local_1698;
  undefined1 local_1690;
  undefined1 local_1688;
  undefined1 local_1680;
  undefined8 *local_1678;
  int local_1668 [2];
  undefined8 local_1660;
  undefined4 uStack_1658;
  undefined4 uStack_1654;
  undefined4 local_1650;
  undefined1 local_1648 [4];
  undefined1 auStack_1644 [4092];
  char local_648 [1536];
  ulonglong local_48;
  
  if (param_2 == 0) {
    return;
  }
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1708;
  if (((param_3 != 0) && (param_4 != 0)) && (*(char *)(param_4 + 0x23b8) != '\0')) {
    iVar1 = *(int *)(param_4 + 0x36c);
    if (((((0 < iVar1) && (*(int *)(param_4 + 0x368) != 0)) &&
         ((DAT_180b8f818 == '\0' &&
          ((sVar2 = thunk_FUN_180624430(*param_8), sVar2 < 1 &&
           (sVar2 = thunk_FUN_180624430(param_8[1]), sVar2 < 1)))))) &&
        (sVar2 = thunk_FUN_180624430(param_8[2]), sVar2 < 1)) &&
       (((sVar2 = thunk_FUN_180624430(*param_9), sVar2 < 1 &&
         (sVar2 = thunk_FUN_180624430(param_9[1]), sVar2 < 1)) &&
        (sVar2 = thunk_FUN_180624430(param_9[2]), sVar2 < 1)))) {
      FUN_18063ab10(local_1648,0,0x1000);
      puVar3 = auStack_1644;
      lVar5 = 8;
      do {
        *(undefined8 *)(puVar3 + -4) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
        *(undefined4 *)(puVar3 + 0x14) = 0;
        *(undefined8 *)(puVar3 + 0x18) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x20) = 0;
        *(undefined8 *)(puVar3 + 0x28) = 0;
        *(undefined8 *)(puVar3 + 0x30) = 0;
        *(undefined8 *)(puVar3 + 0x38) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x40) = 0;
        *(undefined8 *)(puVar3 + 0x48) = 0;
        *(undefined8 *)(puVar3 + 0x50) = 0;
        *(undefined8 *)(puVar3 + 0x58) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x60) = 0;
        *(undefined8 *)(puVar3 + 0x68) = 0;
        *(undefined8 *)(puVar3 + 0x70) = 0;
        *(undefined8 *)(puVar3 + 0x78) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x80) = 0;
        *(undefined8 *)(puVar3 + 0x88) = 0;
        *(undefined8 *)(puVar3 + 0x90) = 0;
        *(undefined8 *)(puVar3 + 0x98) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0xa0) = 0;
        *(undefined8 *)(puVar3 + 0xa8) = 0;
        *(undefined8 *)(puVar3 + 0xb0) = 0;
        *(undefined8 *)(puVar3 + 0xb8) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0xc0) = 0;
        *(undefined8 *)(puVar3 + 200) = 0;
        *(undefined8 *)(puVar3 + 0xd0) = 0;
        *(undefined8 *)(puVar3 + 0xd8) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0xe0) = 0;
        *(undefined8 *)(puVar3 + 0xe8) = 0;
        *(undefined8 *)(puVar3 + 0xf0) = 0;
        *(undefined8 *)(puVar3 + 0xf8) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x100) = 0;
        *(undefined8 *)(puVar3 + 0x108) = 0;
        *(undefined8 *)(puVar3 + 0x110) = 0;
        *(undefined8 *)(puVar3 + 0x118) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x120) = 0;
        *(undefined8 *)(puVar3 + 0x128) = 0;
        *(undefined8 *)(puVar3 + 0x130) = 0;
        *(undefined8 *)(puVar3 + 0x138) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x140) = 0;
        *(undefined8 *)(puVar3 + 0x148) = 0;
        *(undefined8 *)(puVar3 + 0x150) = 0;
        *(undefined8 *)(puVar3 + 0x158) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x160) = 0;
        *(undefined8 *)(puVar3 + 0x168) = 0;
        *(undefined8 *)(puVar3 + 0x170) = 0;
        *(undefined8 *)(puVar3 + 0x178) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x180) = 0;
        *(undefined8 *)(puVar3 + 0x188) = 0;
        *(undefined8 *)(puVar3 + 400) = 0;
        *(undefined8 *)(puVar3 + 0x198) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x1a0) = 0;
        *(undefined8 *)(puVar3 + 0x1a8) = 0;
        *(undefined8 *)(puVar3 + 0x1b0) = 0;
        *(undefined8 *)(puVar3 + 0x1b8) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x1c0) = 0;
        *(undefined8 *)(puVar3 + 0x1c8) = 0;
        *(undefined8 *)(puVar3 + 0x1d0) = 0;
        *(undefined8 *)(puVar3 + 0x1d8) = 0x3f800000;
        *(undefined8 *)(puVar3 + 0x1e0) = 0;
        *(undefined8 *)(puVar3 + 0x1e8) = 0;
        *(undefined8 *)(puVar3 + 0x1f0) = 0;
        *(undefined4 *)(puVar3 + 0x1f8) = 0x3f800000;
        puVar3 = puVar3 + 0x200;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      local_1668[0] = 0x80;
      local_1650 = 0;
      piVar4 = local_1668;
      if (iVar1 < 0x81) {
        piVar4 = (int *)(param_4 + 0x36c);
      }
      iVar1 = *piVar4;
      if (0 < iVar1) {
        FUN_18063aed0(local_1648,param_4 + 0x370,(longlong)iVar1 << 5);
      }
      local_1688 = *(undefined1 *)(param_4 + 0x23bb);
      local_1660 = 0;
      uStack_1658 = 0;
      if (((DAT_180b8f808 == '\0') || (DAT_180b8f809 != '\0')) ||
         (DAT_180cc935c <= *(int *)(param_4 + 0x23b4))) {
        local_1690 = 0;
      }
      else {
        local_1690 = 1;
      }
      local_1678 = &local_1660;
      local_1680 = 0;
      local_1698 = *(undefined8 *)(param_2 + 8);
      local_16b8 = local_1648;
      local_16a0 = 0;
      local_16c0 = *(undefined4 *)(param_4 + 0x23b4);
      local_16c8 = param_9;
      local_16d0 = param_8;
      local_16d8 = (char *)CONCAT44(local_16d8._4_4_,DAT_180cc9378);
      local_16e0 = (char *)CONCAT44(local_16e0._4_4_,DAT_180cc9374);
      local_16e8 = (undefined **)CONCAT44(local_16e8._4_4_,param_7);
      local_16b0 = iVar1;
      local_16a8 = param_4 + 0x48;
      FUN_1802d4b60(local_1688,param_3,param_5,param_6);
      DAT_180b8f810 = *(undefined8 *)(param_2 + 8);
      uStack_1658 = CONCAT31(uStack_1658._1_3_,1);
      _DAT_180b8f818 = CONCAT44(uStack_1654,uStack_1658);
      local_1660 = DAT_180b8f810;
      FUN_18063ab10(local_648,0,0x600);
      local_16d8 = "aim_assist";
      if (DAT_180b8f808 != '\0') {
        local_16d8 = "trigger";
      }
      local_16e8 = *(undefined ***)(param_2 + 8);
      local_16e0 = (char *)param_3;
      FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                    "command=%lld target=0x%llx source=%s submission=pending");
      local_16e8 = &PTR_180700558;
      if (local_648[0] != '\0') {
        local_16e8 = (undefined **)&DAT_1806bcfc0;
      }
      local_16e0 = local_648;
      FUN_1800f6900(0);
    }
  }
}



