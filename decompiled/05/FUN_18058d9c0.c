// FUN_18058d9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058d9c0 */

ulonglong FUN_18058d9c0(longlong param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  short sVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar9 = 0;
  uVar10 = (ulonglong)param_2;
  if (*(uint *)(lVar2 + 8) < *(ushort *)(lVar2 + 0x1a) + 4 + (uint)*(ushort *)(lVar2 + 0x62)) {
    uVar6 = FUN_180573d00(lVar2,4,0);
    local_res8[0] = (uint)uVar6;
    if (local_res8[0] != 0) {
      return uVar6;
    }
  }
  else {
    local_res8[0] = 0;
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 8 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x10 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x18 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x100);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 0x218) != 0) {
    FUN_18057abd0(uVar7,*(undefined8 *)(lVar2 + 0x220));
    *(undefined8 *)(lVar2 + 0x220) = 0;
  }
  *(undefined4 *)(lVar2 + 0x218) = 0;
  uVar6 = FUN_1805788b0(uVar3,*(undefined4 *)(param_1 + 0xe0));
  local_res8[0] = (uint)uVar6;
  if (local_res8[0] == 0) {
    uVar4 = FUN_180578720(uVar3,local_res8);
    uVar6 = (ulonglong)local_res8[0];
    if ((local_res8[0] == 0) && (uVar4 != 0)) {
      uVar8 = (uint)uVar4;
      if (*(uint *)(param_1 + 0x30) < uVar8) {
        uVar6 = 0x16;
      }
      else {
        uVar7 = FUN_18057ac40(uVar7,1,0,uVar8,0,local_res8);
        *(undefined8 *)(lVar2 + 0x220) = uVar7;
        uVar6 = (ulonglong)local_res8[0];
        if (local_res8[0] == 0) {
          uVar6 = FUN_180578100(uVar3,uVar7,uVar8);
          local_res8[0] = (uint)uVar6;
          if (local_res8[0] == 0) {
            *(uint *)(lVar2 + 0x218) = uVar8;
            lVar2 = *(longlong *)(param_1 + 0x18);
            sVar5 = (*(short *)(lVar2 + 0x1a) - (short)param_2) + 4;
            *(short *)(param_1 + 0xa0) = sVar5;
            *(short *)(param_1 + 0xa2) = *(short *)(lVar2 + 0x18) - (short)param_3;
            *(ulonglong *)(param_1 + 0xa8) = *(longlong *)(lVar2 + 0x40) + uVar10 * 8;
            *(ulonglong *)(param_1 + 0xb0) = *(longlong *)(lVar2 + 0x20) + uVar10 * 8;
            *(ulonglong *)(param_1 + 0xb8) = *(longlong *)(lVar2 + 0x48) + uVar10 * 8;
            *(ulonglong *)(param_1 + 0xc0) = *(longlong *)(lVar2 + 0x28) + uVar10;
            lVar2 = *(longlong *)(lVar2 + 0x30);
            *(short *)(param_1 + 0xd0) = (short)param_2;
            *(ulonglong *)(param_1 + 200) = lVar2 + (ulonglong)param_3 * 2;
            if (sVar5 != 4) {
              do {
                uVar8 = (int)uVar9 + 1;
                pbVar1 = (byte *)(uVar9 + *(longlong *)(param_1 + 0xc0));
                *pbVar1 = *pbVar1 & 0xe7;
                uVar9 = (ulonglong)uVar8;
              } while (uVar8 < *(ushort *)(param_1 + 0xa0) - 4);
            }
            uVar6 = FUN_18058c8f0(param_1,1);
          }
        }
      }
    }
  }
  return uVar6;
}



