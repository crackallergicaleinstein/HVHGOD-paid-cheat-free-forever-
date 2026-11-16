// FUN_1804e91d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e91d0 */

uint * FUN_1804e91d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = *(int *)(param_2 + 0x30);
  FUN_1804ebad0(param_2 + 0x30,param_4);
  puVar5 = (uint *)((longlong)iVar2 * 0x2c + *(longlong *)(param_2 + 0x38));
  if (puVar5[10] != 0xffffffff) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x68);
    lVar7 = (longlong)
            (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) +
                     (ulonglong)(puVar5[10] & 0x7ffff) * 4) << 0xc) >> 0xc;
    puVar5[6] = (uint)((float)*(ushort *)(lVar6 + lVar7 * 8) * *(float *)(param_1 + 0x54));
    puVar5[7] = (uint)((float)*(ushort *)(lVar6 + 2 + lVar7 * 8) * *(float *)(param_1 + 0x58));
    puVar5[8] = (uint)((float)((uint)*(ushort *)(lVar6 + lVar7 * 8) +
                              (uint)*(ushort *)(lVar6 + 4 + lVar7 * 8)) * *(float *)(param_1 + 0x54)
                      );
    puVar5[9] = (uint)((float)((uint)*(ushort *)(lVar6 + 6 + lVar7 * 8) +
                              (uint)*(ushort *)(lVar6 + 2 + lVar7 * 8)) * *(float *)(param_1 + 0x58)
                      );
    uVar4 = *(uint *)(param_2 + 0x4c);
    *(uint *)(param_2 + 0x4c) =
         ((uint)*(ushort *)(lVar6 + 6 + lVar7 * 8) * (uint)*(ushort *)(lVar6 + 4 + lVar7 * 8) +
          uVar4 ^ uVar4) & 0x3ffffff ^ uVar4;
  }
  if (param_3 != 0) {
    fVar9 = *(float *)(**(longlong **)(*(longlong *)(param_2 + 0x58) + 0x28) + 0x3c);
    if (fVar9 == 0.0) {
      fVar9 = 1.0;
    }
    else {
      fVar9 = *(float *)(param_2 + 0x14) / fVar9;
    }
    fVar8 = fVar9 * *(float *)(param_3 + 0x58);
    fVar1 = (float)puVar5[1];
    if (fVar8 <= fVar1) {
      auVar3 = vminss_avx(ZEXT416((uint)(fVar9 * *(float *)(param_3 + 0x5c))),ZEXT416((uint)fVar1));
      fVar8 = auVar3._0_4_;
    }
    if (fVar8 != fVar1) {
      fVar9 = (fVar8 - fVar1) * 0.5;
      if (*(char *)(param_3 + 0x36) != '\0') {
        fVar9 = (float)(int)fVar9;
      }
      puVar5[2] = (uint)(fVar9 + (float)puVar5[2]);
      puVar5[4] = (uint)(fVar9 + (float)puVar5[4]);
    }
    if (*(char *)(param_3 + 0x36) != '\0') {
      fVar8 = (float)(int)(fVar8 + 0.5);
    }
    puVar5[1] = (uint)(fVar8 + *(float *)(param_3 + 0x60));
  }
  if ((*puVar5 & 1) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x5e) = 1;
    *(undefined1 *)(param_1 + 0x53) = 1;
  }
  uVar4 = *puVar5 >> 6;
  FUN_1804e82b0(param_2,uVar4 + 1);
  *(uint *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar4 * 4) = puVar5[1];
  *(short *)(*(longlong *)(param_2 + 0x28) + (ulonglong)uVar4 * 2) = (short)iVar2;
  lVar6 = (longlong)((int)uVar4 >> 0xd) >> 3;
  *(byte *)(lVar6 + 0x34 + *(longlong *)(param_2 + 0x58)) =
       *(byte *)(lVar6 + 0x34 + *(longlong *)(param_2 + 0x58)) |
       (byte)(1 << ((int)uVar4 >> 0xd & 7U));
  return puVar5;
}



