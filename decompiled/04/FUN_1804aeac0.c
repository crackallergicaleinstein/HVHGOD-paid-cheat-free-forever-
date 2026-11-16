// FUN_1804aeac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aeac0 */

void FUN_1804aeac0(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  float fVar12;
  float local_res8;
  
  lVar3 = DAT_180bb8ae8;
  if (DAT_180bbb230 != 0) {
    DAT_180bbb230 = DAT_180bbb230 + -1;
    uVar2 = *(undefined8 *)(DAT_180bbb238 + (longlong)DAT_180bbb230 * 8);
    if ((char)((ulonglong)uVar2 >> 0x20) != '\0') {
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x14d0) + 0x2c8);
      iVar1 = *(int *)(lVar3 + 0xa0);
      iVar9 = iVar1 + -1;
      *(int *)(lVar3 + 0xa0) = iVar9;
      if (iVar9 == 0) {
        puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x3c);
      }
      else {
        puVar10 = (undefined8 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(lVar3 + 0xa8));
      }
      uVar8 = puVar10[1];
      *(undefined8 *)(lVar3 + 0x60) = *puVar10;
      *(undefined8 *)(lVar3 + 0x68) = uVar8;
      FUN_1804d9200();
    }
    lVar3 = DAT_180bb8ae8;
    local_res8 = (float)uVar2;
    if (local_res8 < 1.0) {
      fVar7 = 1.0 - (1.0 - local_res8) * (1.0 - local_res8);
      fVar5 = DAT_180b0a41c * 4.0;
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x14d0) + 0x2c8);
      lVar11 = *(longlong *)(lVar3 + 0x28);
      lVar3 = lVar11 + (longlong)*(int *)(lVar3 + 0x20) * 0x14;
      if (lVar11 != lVar3) {
        do {
          fVar6 = ((float)(*(uint *)(lVar11 + 0x10) >> 0x18) / 255.0) * fVar7;
          fVar12 = 0.0;
          if (0.0 <= fVar6) {
            auVar4 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar6));
            fVar12 = auVar4._0_4_;
          }
          *(uint *)(lVar11 + 0x10) =
               (int)(longlong)(fVar12 * 255.0 + 0.5) << 0x18 | *(uint *)(lVar11 + 0x10) & 0xffffff;
          *(float *)(lVar11 + 4) = -fVar5 * (1.0 - fVar7) + *(float *)(lVar11 + 4);
          lVar11 = lVar11 + 0x14;
        } while (lVar11 != lVar3);
      }
    }
  }
  FUN_1804c7e80();
  return;
}



