// FUN_1802bde10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bde10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1802bde10(void)

{
  longlong lVar1;
  undefined8 uVar2;
  SHORT SVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 auStack_148 [32];
  char *local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [2];
  longlong local_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  if (DAT_180b0b3c8 == '\0') {
    if (DAT_180b8fb30 != '\0') {
      FUN_1802c1190();
      DAT_180b8fb30 = '\0';
    }
    DAT_180b8fb31 = '\0';
    FUN_1802c1400(&DAT_180b8fb38);
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_b8 = _DAT_180bb8890;
    lStack_b0 = lRam0000000180bb8898;
    lStack_a8 = lRam0000000180bb88a0;
    uStack_a0 = uRam0000000180bb88a8;
    local_f8 = _DAT_180bb88b0;
    uStack_f0 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if ((lStack_b0 != 0) || (lStack_a8 != 0)) {
      SVar3 = GetAsyncKeyState(9);
      if (SVar3 < 0) {
        if (DAT_180b8fb31 == '\0') {
          DAT_180b8fb31 = '\x01';
          FUN_1802c1400(&DAT_180b8fb38);
          DAT_180b8fb78 = 0;
          FUN_1802be400(&DAT_180b8fb30);
        }
        if ((DAT_180b8fb30 != '\0') ||
           ((DAT_180b8fb7c = DAT_180b8fb7c + 1, DAT_180b8fb7c == (DAT_180b8fb7c / 0x1e) * 0x1e &&
            (FUN_1802be400(&DAT_180b8fb30), DAT_180b8fb30 != '\0')))) {
          DAT_180b8fb78 = DAT_180b8fb78 + 1;
          uVar5 = DAT_180b8fb78 & 0x80000007;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
          }
          if (uVar5 == 0) {
            uVar5 = DAT_180b8fb78 & 0x8000003f;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
            }
            if (uVar5 == 0) {
              FUN_1802c1400(&DAT_180b8fb38);
            }
            local_30 = (undefined1  [16])0x0;
            local_20 = 0;
            FUN_1803d44c0(0,local_30,1);
            local_48 = (undefined1  [16])0x0;
            local_38 = 0;
            FUN_1803d44c0(0,local_48,2);
            if (DAT_180b8fb78 == 8) {
              local_c8[0] = (longlong)(local_48._8_8_ - local_48._0_8_) / 0x18;
              local_b8 = (longlong)(local_30._8_8_ - local_30._0_8_) / 0x18;
              local_98 = 0xdb35e39b27e1c185;
              uStack_90 = 0xa05181ee77d57a06;
              local_88 = 0x929654b1461b7377;
              uStack_80 = 0xa5cea54bfef7110;
              local_78 = 0xa70c9f7f916b7e19;
              uStack_70 = 0x2b2d6d82aa402c0a;
              local_68 = 0xc064ed9510bc010b;
              uStack_60 = 0xfec09918395f26c4;
              local_58 = 0x835e2313e2c48f8d;
              uStack_50 = 0xf863c3261a551f0e;
              local_118 = 0x6f6265726f63735b;
              uStack_110 = 0x706165775f647261;
              local_108 = 0x6f6373205d736e6f;
              uStack_100 = 0x206472616f626572;
              local_f8 = 0x203b64656e65706f;
              uStack_f0 = 0x3d73726579616c70;
              local_e8 = 0x6f70616577207d7b;
              uStack_e0 = 0x697469746e655f6e;
              local_d8 = 0xa7d7b3d7365;
              uStack_d0 = 0;
              lVar4 = -1;
              do {
                local_120 = lVar4 + 1;
                lVar1 = lVar4 + 1;
                lVar4 = local_120;
              } while (*(char *)((longlong)&local_118 + lVar1) != '\0');
              local_128 = (char *)&local_118;
              FUN_18020eaa0(&local_128,&local_b8,local_c8);
            }
            uVar2 = local_30._8_8_;
            for (plVar6 = (longlong *)local_30._0_8_; plVar6 != (longlong *)uVar2;
                plVar6 = plVar6 + 3) {
              if (*plVar6 != 0) {
                local_b8 = local_48._0_8_;
                lStack_b0 = (longlong)(local_48._8_8_ - local_48._0_8_) / 0x18;
                FUN_1802bf150(&DAT_180b8fb30,*plVar6,&local_b8);
              }
            }
            FUN_1801abba0(local_48);
            FUN_1801abba0(local_30);
          }
        }
      }
      else {
        if ((DAT_180b8fb31 != '\0') && (DAT_180b8fb30 != '\0')) {
          FUN_1802c1190();
        }
        DAT_180b8fb31 = '\0';
      }
    }
  }
}



