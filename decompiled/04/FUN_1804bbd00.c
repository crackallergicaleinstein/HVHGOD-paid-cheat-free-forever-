// FUN_1804bbd00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bbd00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804bbd00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  lVar6 = DAT_180bb8ae8;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  uVar1 = *(undefined4 *)(DAT_180bb8ae8 + 0x1438);
  *(undefined4 *)(DAT_180bb8ae8 + 0x1438) = *(undefined4 *)(lVar3 + 0x10);
  local_38 = *(undefined8 *)(lVar3 + 0x30);
  FUN_1804c14e0();
  lVar4 = DAT_180bb8ae8;
  if (*(short *)(lVar3 + 0xda) == 1) {
    lVar4 = *(longlong *)(lVar6 + 0x14d0);
    local_24 = *(float *)(lVar4 + 0x11c);
    local_28 = *(float *)(lVar4 + 0x118);
    local_1c = local_24 + local_38._4_4_;
    local_20 = local_28 + (float)local_38;
    FUN_1804c6420(&local_38,0xbf800000);
    uVar7 = *(uint *)(lVar3 + 0x18) & 0x100;
    if (((*(short *)(lVar3 + 0x174) == 0) && (*(char *)(lVar3 + 0x17a) == '\0')) || (uVar7 != 0)) {
      FUN_1804c6190(&local_28,*(undefined4 *)(lVar3 + 0x90),0,2);
      if (uVar7 != 0) {
        *(ushort *)(lVar4 + 0x176) = *(ushort *)(lVar4 + 0x176) | *(ushort *)(lVar3 + 0x176);
      }
    }
    else {
      FUN_1804c6190(&local_28,*(undefined4 *)(lVar3 + 0x90),0,0);
      FUN_1804b4250(&local_28,*(undefined4 *)(lVar3 + 0x90),0,0xbf800000);
      if ((*(short *)(lVar3 + 0x174) == 0) && (lVar3 == *(longlong *)(lVar6 + 0x2040))) {
        local_30 = local_20 + 2.0;
        local_2c = local_1c + 2.0;
        local_38 = CONCAT44(local_24 - 2.0,local_28 - 2.0);
        FUN_1804b4250(&local_38,*(undefined4 *)(lVar6 + 0x203c),2,0xbf800000);
      }
    }
    if (*(longlong *)(lVar6 + 0x14d8) == lVar3) {
      *(uint *)(lVar6 + 0x1ec8) = *(uint *)(lVar6 + 0x1ec8) | 0x80;
    }
    *(undefined4 *)(lVar3 + 0x1e4) = *(undefined4 *)(lVar6 + 0x1ec8);
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 0x1e4);
    auVar5 = vinsertps_avx(ZEXT416((uint)*(float *)(lVar3 + 0x28)),
                           ZEXT416((uint)*(float *)(lVar3 + 0x2c)),0x10);
    auVar5 = vinsertps_avx(auVar5,ZEXT416((uint)(*(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30)
                                                )),0x20);
    auVar5 = vinsertps_avx(auVar5,ZEXT416((uint)(*(float *)(lVar3 + 0x2c) + *(float *)(lVar3 + 0x34)
                                                )),0x30);
    auVar8._16_16_ = auVar5;
    auVar8._0_16_ = auVar5;
    *(undefined4 *)(DAT_180bb8ae8 + 0x1ec0) = *(undefined4 *)(lVar3 + 0x90);
    *(undefined1 (*) [32])(lVar4 + 0x1ecc) = auVar8;
    *(undefined4 *)(lVar4 + 0x1ec4) = *(undefined4 *)(lVar4 + 0x1e80);
    *(undefined4 *)(lVar4 + 0x1ec8) = uVar2;
  }
  *(undefined4 *)(lVar6 + 0x2878) = 0xff7fffff;
  *(undefined4 *)(lVar6 + 0x1438) = uVar1;
}



