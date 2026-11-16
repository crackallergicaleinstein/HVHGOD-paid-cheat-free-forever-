// FUN_1804bb690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bb690 */

void FUN_1804bb690(float *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 local_48;
  
  lVar16 = 0;
  lVar4 = *(longlong *)(DAT_180bb8ae8 + 0x14f0);
  lVar12 = 0;
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x14) & 0x200) == 0)) {
    lVar12 = lVar4;
  }
  iVar11 = *(int *)(DAT_180bb8ae8 + 0x1470) + -1;
  auVar8 = vmaxss_avx(ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xcec)),
                      ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xc9c)));
  auVar9 = vmaxss_avx(ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xcf0)),
                      ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xc9c)));
  local_48 = CONCAT44(auVar9._0_4_,auVar8._0_4_);
  uVar10 = local_48;
  if (-1 < iVar11) {
    lVar14 = (longlong)iVar11;
    plVar15 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x1478) + lVar14 * 8);
    lVar13 = lVar12;
    do {
      lVar5 = *plVar15;
      lVar12 = lVar13;
      if (((*(char *)(lVar5 + 0xcd) != '\0') && (*(char *)(lVar5 + 0xd4) == '\0')) &&
         ((*(uint *)(lVar5 + 0x14) >> 9 & 1) == 0)) {
        uVar3 = uVar10;
        if ((*(uint *)(lVar5 + 0x14) & 0x42) != 0) {
          uVar3 = *(undefined8 *)(DAT_180bb8ae8 + 0xcec);
        }
        fVar1 = *param_1;
        if (*(float *)(lVar5 + 0x218) - (float)uVar3 <= fVar1) {
          local_48._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          fVar2 = param_1[1];
          if (((*(float *)(lVar5 + 0x21c) - local_48._4_4_ <= fVar2) &&
              (fVar1 < (float)uVar3 + *(float *)(lVar5 + 0x220))) &&
             (fVar2 < local_48._4_4_ + *(float *)(lVar5 + 0x224))) {
            if (*(short *)(lVar5 + 0x288) != 0) {
              fVar6 = (float)(int)*(short *)(lVar5 + 0x28c) + *(float *)(lVar5 + 0x28);
              fVar7 = (float)(int)*(short *)(lVar5 + 0x28e) + *(float *)(lVar5 + 0x2c);
              if (((fVar6 <= fVar1) && (fVar7 <= fVar2)) &&
                 ((fVar1 < (float)(int)*(short *)(lVar5 + 0x288) + fVar6 &&
                  (fVar2 < (float)(int)*(short *)(lVar5 + 0x28a) + fVar7)))) goto LAB_1804bb87e;
            }
            lVar12 = lVar5;
            if (lVar13 != 0) {
              lVar12 = lVar13;
            }
            if ((lVar16 == 0) &&
               ((lVar4 == 0 || (*(longlong *)(lVar5 + 0x3d8) != *(longlong *)(lVar4 + 0x3d8))))) {
              lVar16 = lVar5;
            }
            if ((lVar12 != 0) && (lVar16 != 0)) break;
          }
        }
      }
LAB_1804bb87e:
      plVar15 = plVar15 + -1;
      lVar14 = lVar14 + -1;
      lVar13 = lVar12;
    } while (-1 < lVar14);
  }
  *param_3 = lVar12;
  if (param_4 != (longlong *)0x0) {
    *param_4 = lVar16;
  }
  return;
}



