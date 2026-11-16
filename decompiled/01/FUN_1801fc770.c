// FUN_1801fc770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fc770 */

longlong FUN_1801fc770(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  short *psVar7;
  ulonglong uVar8;
  undefined1 local_28 [32];
  
  local_28._5_11_ = SUB1611((undefined1  [16])0x0,5);
  auVar3[0xb] = 0;
  auVar3._0_11_ = local_28._5_11_;
  local_28._0_12_ = auVar3 << 0x28;
  local_28._13_3_ = SUB163((undefined1  [16])0x0,0xd);
  local_28[0xc] = 0;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = local_28._4_12_;
  auVar2 = vinsertps_avx(auVar2 << 0x20,ZEXT816(0),0x20);
  *param_3 = auVar2;
  *(undefined8 *)param_3[1] = 0;
  uVar1 = *(uint *)(param_2 + 0x210);
  uVar4 = (ulonglong)(int)uVar1;
  if ((0x4000 < uVar1) || ((uVar1 != 0 && (*(longlong *)(param_2 + 0x218) == 0)))) {
    return (ulonglong)(uint7)(int7)(int3)(uVar1 >> 8) << 8;
  }
  if (0 < (int)uVar1) {
    psVar7 = (short *)(*(longlong *)(param_2 + 0x218) + 0x30);
    uVar8 = uVar4;
    do {
      pcVar5 = *param_3 + 4;
      lVar6 = 0;
      uVar4 = 0;
      do {
        if ((*psVar7 == *(short *)((longlong)&DAT_180701c10 + uVar4)) && (*pcVar5 == '\0')) {
          uVar4 = (ulonglong)*(uint *)(psVar7 + 2);
          *(uint *)(*param_3 + lVar6 * 8) = *(uint *)(psVar7 + 2);
          (*param_3)[lVar6 * 8 + 4] = 1;
          break;
        }
        lVar6 = lVar6 + 1;
        uVar4 = uVar4 + 2;
        pcVar5 = pcVar5 + 8;
      } while (uVar4 < 6);
      psVar7 = psVar7 + 0x24;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



