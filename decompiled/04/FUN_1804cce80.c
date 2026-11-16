// FUN_1804cce80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cce80 */

void FUN_1804cce80(void)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  char *_Str1;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_38;
  float local_34;
  float local_30;
  
  lVar5 = DAT_180bb8ae8;
  if (0.15 <= *(float *)(DAT_180bb8ae8 + 0x2240)) {
    lVar8 = **(longlong **)(DAT_180bb8ae8 + 0x2030);
    fVar9 = *(float *)(lVar8 + 0x10);
    fVar11 = *(float *)(lVar8 + 0x14);
    *(uint *)(DAT_180bb8ae8 + 0x1f10) = *(uint *)(DAT_180bb8ae8 + 0x1f10) | 0x10;
    *(float *)(lVar5 + 0x1f5c) = fVar9 * 0.2;
    *(float *)(lVar5 + 0x1f60) = fVar11 * 0.2;
    *(undefined4 *)(lVar5 + 0x1f64) = 0x7f7fffff;
    *(undefined4 *)(lVar5 + 0x1f68) = 0x7f7fffff;
    *(undefined8 *)(lVar5 + 0x1f70) = 0;
    *(undefined8 *)(lVar5 + 0x1f78) = 0;
    fVar9 = *(float *)(lVar8 + 0x10);
    fVar11 = *(float *)(lVar8 + 0x14);
    fVar2 = *(float *)(lVar8 + 8);
    fVar3 = *(float *)(lVar8 + 0xc);
    *(uint *)(lVar5 + 0x1f10) = *(uint *)(lVar5 + 0x1f10) | 1;
    *(float *)(lVar5 + 0x1f24) = fVar11 * 0.5 + fVar3;
    *(float *)(lVar5 + 0x1f20) = fVar9 * 0.5 + fVar2;
    *(undefined4 *)(lVar5 + 0x1f28) = 0x3f000000;
    *(undefined4 *)(lVar5 + 0x1f2c) = 0x3f000000;
    *(undefined4 *)(lVar5 + 0x1f14) = 1;
    fVar9 = *(float *)(lVar5 + 0xc8c);
    fVar11 = *(float *)(lVar5 + 0xc90);
    local_38 = 2;
    local_34 = fVar9;
    local_30 = fVar11;
    FUN_1804d06d0(lVar5 + 0x1fa8,&local_38);
    *(float *)(lVar5 + 0xc8c) = fVar9 + fVar9;
    *(float *)(lVar5 + 0xc90) = fVar11 + fVar11;
    FUN_1804bee10("##NavWindowingOverlay",0,0x31347);
    *(undefined8 *)(lVar5 + 0x2238) = *(undefined8 *)(lVar5 + 0x14d0);
    if (*(char *)(lVar5 + 0x18) != '\0') {
      FUN_1804f7a90(lVar5 + 0x18);
    }
    iVar6 = *(int *)(lVar5 + 0x1480) + -1;
    lVar8 = (longlong)iVar6;
    if (-1 < iVar6) {
      uVar10 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x1488) + lVar8 * 8);
        if (((*(char *)(lVar4 + 0xcd) != '\0') && (lVar4 == *(longlong *)(lVar4 + 0x3d8))) &&
           ((*(uint *)(lVar4 + 0x14) & 0x20000) == 0)) {
          _Str1 = *(char **)(lVar4 + 8);
          pcVar7 = _Str1;
          if (_Str1 == (char *)0xffffffffffffffff) {
LAB_1804cd062:
            if ((*(uint *)(lVar4 + 0x14) >> 0x1a & 1) == 0) {
              if (((*(uint *)(lVar4 + 0x14) >> 10 & 1) == 0) ||
                 (iVar6 = strcmp(_Str1,"##MainMenuBar"), iVar6 != 0)) {
                pcVar7 = *(char **)(DAT_180bb8ae8 + 0x2828);
              }
              else {
                pcVar7 = *(char **)(DAT_180bb8ae8 + 0x2818);
              }
            }
            else {
              pcVar7 = *(char **)(DAT_180bb8ae8 + 0x2820);
            }
            _Str1 = "*Missing Text*";
            if (pcVar7 != (char *)0x0) {
              _Str1 = pcVar7;
            }
          }
          else {
            do {
              if ((*pcVar7 == '\0') || ((pcVar1 = pcVar7 + 1, *pcVar7 == '#' && (*pcVar1 == '#'))))
              break;
              pcVar7 = pcVar1;
            } while (pcVar1 != (char *)0xffffffffffffffff);
            if (_Str1 == pcVar7) goto LAB_1804cd062;
          }
          local_res8 = uVar10;
          local_resc = uVar10;
          FUN_1804ff860(_Str1,*(longlong *)(lVar5 + 0x2228) == lVar4,0,&local_res8);
        }
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    FUN_1804c14e0();
    FUN_1804b2de0(1);
  }
  return;
}



