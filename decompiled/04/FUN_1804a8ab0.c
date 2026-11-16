// FUN_1804a8ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a8ab0 */

ulonglong FUN_1804a8ab0(uint param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar2 = DAT_180bb8ae8;
  uVar3 = (ulonglong)*(int *)(DAT_180bb8ae8 + 0x2008);
  if ((*(int *)(DAT_180bb8ae8 + 0x1ff8) <= *(int *)(DAT_180bb8ae8 + 0x2008)) ||
     (lVar4 = uVar3 * 0x38, uVar3 = *(ulonglong *)(DAT_180bb8ae8 + 0x2000),
     *(uint *)(lVar4 + uVar3) != param_1)) {
    return uVar3 & 0xffffffffffffff00;
  }
  uVar3 = (((ulonglong)param_1 ^ 0xcdab8c75b9187834) >> 0x1e ^
          (ulonglong)param_1 ^ 0xcdab8c75b9187834) * -0x40a7b892e31b1a47;
  uVar3 = (uVar3 >> 0x1b ^ uVar3) * -0x6b2fb644ecceee15;
  uVar3 = uVar3 >> 0x1f ^ uVar3;
  fVar6 = 0.0;
  fVar5 = (float)FUN_1804b1470(*(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x1c0),
                               (uint)(uVar3 >> 0x20) ^ (uint)uVar3,0);
  local_48 = *param_2;
  local_3c = DAT_180b0a41c * 6.0;
  local_44 = DAT_180b0a41c * 4.0 + *(float *)(param_3 + 4);
  DAT_180bbecdc = 0;
  if ((fVar6 < fVar5) && (*(float *)(lVar2 + 0x34) - local_3c < local_44 + fVar5)) {
    auVar1 = vmaxss_avx(ZEXT416((uint)local_3c),
                        ZEXT416((uint)(((float)param_2[1] - DAT_180b0a41c * 4.0) - fVar5)));
    local_44 = auVar1._0_4_;
    DAT_180bbecdc = 1;
  }
  local_40 = DAT_180b0a41c * 10.0;
  DAT_180bbecdd = 1;
  uVar3 = FUN_1804a8290(param_1,&local_48,param_4,&local_40,0xbf800000);
  return uVar3;
}



