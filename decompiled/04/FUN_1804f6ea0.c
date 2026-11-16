// FUN_1804f6ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f6ea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f6ea0(float *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  lVar1 = DAT_180bb8ae8;
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14d0);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    auVar8 = ZEXT464((uint)*(float *)(lVar1 + 0x118));
    auVar9 = ZEXT464((uint)*(float *)(lVar1 + 0x11c));
    auVar7 = ZEXT464((uint)(*(float *)(lVar1 + 0x11c) + param_1[1]));
    auVar10 = ZEXT464((uint)(*(float *)(lVar1 + 0x118) + *param_1));
    FUN_1804c6420(param_1,0xbf800000);
    lVar4 = DAT_180bb8ae8;
    auVar2 = vinsertps_avx(auVar8._0_16_,auVar9._0_16_,0x10);
    auVar2 = vinsertps_avx(auVar2,auVar10._0_16_,0x20);
    local_68 = vinsertps_avx(auVar2,auVar7._0_16_,0x30);
    *(uint *)(DAT_180bb8ae8 + 0x1ec4) =
         *(uint *)(DAT_180bb8ae8 + 0x1e80) | *(uint *)(DAT_180bb8ae8 + 0x1e8c);
    lVar1 = *(longlong *)(lVar4 + 0x14d0);
    auVar6._16_16_ = local_68;
    auVar6._0_16_ = local_68;
    *(undefined4 *)(lVar4 + 0x1ec0) = 0;
    *(undefined1 (*) [32])(lVar4 + 0x1ecc) = auVar6;
    *(undefined4 *)(lVar4 + 0x1ec8) = 0;
    *(undefined8 *)(lVar4 + 0x1e88) = 0;
    if ((((auVar7._0_4_ <= *(float *)(lVar1 + 0x26c)) || (*(float *)(lVar1 + 0x274) <= auVar9._0_4_)
         ) || (auVar10._0_4_ <= *(float *)(lVar1 + 0x268))) ||
       (*(float *)(lVar1 + 0x270) <= auVar8._0_4_)) {
      if (*(char *)(lVar4 + 0x154e) == '\0') {
      }
      uVar5 = 1;
    }
    else {
      *(undefined4 *)(lVar4 + 0x1ec8) = 0x100;
      uVar5 = 0x101;
    }
    cVar3 = FUN_1804c3600(local_68,local_68 + 8,1);
    if (cVar3 != '\0') {
      *(undefined4 *)(lVar4 + 0x1ec8) = uVar5;
    }
  }
}



