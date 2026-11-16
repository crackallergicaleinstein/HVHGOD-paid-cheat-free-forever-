// FUN_1804e5d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e5d40 */

undefined8 FUN_1804e5d40(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  uint local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  uint local_50;
  
  lVar2 = *(longlong *)(param_2 + 0x58);
  lVar6 = FUN_1804e9670(param_2,0x2e);
  if (lVar6 == 0) {
    lVar6 = FUN_1804e9670(param_2,0xff0e);
    if (lVar6 == 0) {
      return 0;
    }
  }
  uVar8 = (ulonglong)(*(uint *)(lVar6 + 0x28) & 0x7ffff);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x68);
  fVar11 = (*(float *)(lVar6 + 0x10) - *(float *)(lVar6 + 8)) + 1.0;
  lVar10 = (longlong)
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) + uVar8 * 4) << 0xc) >> 0xc
  ;
  local_50 = FUN_1804e7f30(param_1,(uint)*(ushort *)(lVar3 + 4 + lVar10 * 8) * 3 + 2,
                           *(undefined2 *)(lVar3 + 6 + lVar10 * 8),0);
  local_70 = *(float *)(lVar6 + 8);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x68);
  local_60 = (undefined1  [16])0x0;
  local_68 = (fVar11 * 3.0 + local_70) - 1.0;
  local_6c = *(undefined4 *)(lVar6 + 0xc);
  auVar5 = vmaxss_avx(ZEXT416(*(uint *)(lVar6 + 4)),ZEXT416((uint)local_68));
  local_74 = auVar5._0_4_;
  local_64 = *(undefined4 *)(lVar6 + 0x14);
  local_78 = (uint)*(ushort *)(lVar2 + 0x30) << 6 | 2;
  lVar10 = (longlong)
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) +
                    (ulonglong)(local_50 & 0x7ffff) * 4) << 0xc) >> 0xc;
  uVar7 = FUN_1804e91d0(param_1,param_2,0,&local_78);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x68);
  lVar6 = (longlong)
          (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) + uVar8 * 4) << 0xc) >> 0xc;
  iVar9 = 0;
  do {
    uVar1 = *(ushort *)(lVar2 + 4 + lVar6 * 8);
    FUN_1804e3330(uVar4,*(undefined2 *)(lVar2 + lVar6 * 8),*(undefined2 *)(lVar2 + 2 + lVar6 * 8),
                  uVar4,(uVar1 + 1) * iVar9 + (uint)*(ushort *)(lVar3 + lVar10 * 8),
                  *(undefined2 *)(lVar3 + 2 + lVar10 * 8),uVar1,
                  *(undefined2 *)(lVar2 + 6 + lVar6 * 8));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  FUN_1804e33e0(uVar4,*(undefined2 *)(lVar3 + lVar10 * 8),*(undefined2 *)(lVar3 + 2 + lVar10 * 8),
                *(undefined2 *)(lVar3 + 4 + lVar10 * 8),*(undefined2 *)(lVar3 + 6 + lVar10 * 8));
  *(undefined1 *)(param_1 + 0x52) = 0;
  return uVar7;
}



