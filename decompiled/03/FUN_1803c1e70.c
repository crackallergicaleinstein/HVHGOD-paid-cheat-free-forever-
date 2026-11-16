// FUN_1803c1e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c1e70 */

ulonglong FUN_1803c1e70(char *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char *pcVar3;
  uint *puVar4;
  char *pcVar5;
  longlong lVar6;
  
  pcVar5 = param_1 + 0x3c;
  lVar6 = (longlong)param_1 - param_2;
  if (param_1 != pcVar5) {
    puVar4 = (uint *)(param_2 + 4);
    do {
      uVar2 = 0;
      if (((((*(char *)(lVar6 + -4 + (longlong)puVar4) != (char)puVar4[-1]) ||
            (uVar2 = 0, *(char *)((longlong)puVar4 + lVar6 + -3) != *(char *)((longlong)puVar4 + -3)
            )) || (uVar2 = (ulonglong)*puVar4, *(uint *)((longlong)puVar4 + lVar6) != *puVar4)) ||
          ((uVar2 = 0, *(char *)((longlong)puVar4 + lVar6 + 4) != (char)puVar4[1] ||
           (uVar2 = (ulonglong)puVar4[2], *(uint *)((longlong)puVar4 + lVar6 + 8) != puVar4[2]))))
         || (uVar2 = (ulonglong)puVar4[3], *(uint *)((longlong)puVar4 + lVar6 + 0xc) != puVar4[3]))
      goto LAB_1803c2176;
      puVar4 = puVar4 + 5;
    } while ((char *)(lVar6 + -4 + (longlong)puVar4) != pcVar5);
  }
  pcVar3 = (char *)(param_2 + 0x3c);
  if (pcVar5 != param_1 + 0x78) {
    do {
      uVar2 = 0;
      if (((*pcVar5 != *pcVar3) || (uVar2 = 0, pcVar5[1] != pcVar3[1])) ||
         ((uVar2 = (ulonglong)*(uint *)(pcVar3 + 4), *(uint *)(pcVar5 + 4) != *(uint *)(pcVar3 + 4)
          || (((uVar2 = 0, pcVar5[8] != pcVar3[8] ||
               (uVar2 = (ulonglong)*(uint *)(pcVar3 + 0xc),
               *(uint *)(pcVar5 + 0xc) != *(uint *)(pcVar3 + 0xc))) ||
              (uVar2 = (ulonglong)*(uint *)(pcVar3 + 0x10),
              *(uint *)(pcVar5 + 0x10) != *(uint *)(pcVar3 + 0x10))))))) goto LAB_1803c2176;
      pcVar5 = pcVar5 + 0x14;
      pcVar3 = pcVar3 + 0x14;
    } while (pcVar5 != param_1 + 0x78);
    lVar6 = (longlong)param_1 - param_2;
  }
  pcVar5 = param_1 + 0x78;
  if (pcVar5 != param_1 + 0xb4) {
    puVar4 = (uint *)(param_2 + 0x7c);
    do {
      uVar2 = 0;
      if (((*pcVar5 != (char)puVar4[-1]) ||
          (uVar2 = 0, *(char *)(lVar6 + -3 + (longlong)puVar4) != *(char *)((longlong)puVar4 + -3)))
         || (((uVar2 = (ulonglong)*puVar4, *(uint *)(lVar6 + (longlong)puVar4) != *puVar4 ||
              ((uVar2 = 0, *(char *)(lVar6 + 4 + (longlong)puVar4) != (char)puVar4[1] ||
               (uVar2 = (ulonglong)puVar4[2], *(uint *)(lVar6 + 8 + (longlong)puVar4) != puVar4[2]))
              )) || (uVar2 = (ulonglong)puVar4[3],
                    *(uint *)(lVar6 + 0xc + (longlong)puVar4) != puVar4[3])))) goto LAB_1803c2176;
      pcVar5 = pcVar5 + 0x14;
      puVar4 = puVar4 + 5;
    } while (pcVar5 != param_1 + 0xb4);
    lVar6 = (longlong)param_1 - param_2;
  }
  pcVar5 = param_1 + 0xb4;
  if (pcVar5 != param_1 + 0xf0) {
    puVar4 = (uint *)(param_2 + 0xb8);
    do {
      uVar2 = 0;
      if ((((*pcVar5 != (char)puVar4[-1]) ||
           (uVar2 = 0, *(char *)(lVar6 + -3 + (longlong)puVar4) != *(char *)((longlong)puVar4 + -3))
           ) || (uVar2 = (ulonglong)*puVar4, *(uint *)(lVar6 + (longlong)puVar4) != *puVar4)) ||
         (((uVar2 = 0, *(char *)(lVar6 + 4 + (longlong)puVar4) != (char)puVar4[1] ||
           (uVar2 = (ulonglong)puVar4[2], *(uint *)(lVar6 + 8 + (longlong)puVar4) != puVar4[2])) ||
          (uVar2 = (ulonglong)puVar4[3], *(uint *)(lVar6 + 0xc + (longlong)puVar4) != puVar4[3]))))
      goto LAB_1803c2176;
      pcVar5 = pcVar5 + 0x14;
      puVar4 = puVar4 + 5;
    } while (pcVar5 != param_1 + 0xf0);
    lVar6 = (longlong)param_1 - param_2;
  }
  pcVar5 = param_1 + 0xf0;
  if (pcVar5 != param_1 + 300) {
    puVar4 = (uint *)(param_2 + 0xf4);
    do {
      uVar2 = 0;
      if (((*pcVar5 != (char)puVar4[-1]) ||
          (uVar2 = 0, *(char *)(lVar6 + -3 + (longlong)puVar4) != *(char *)((longlong)puVar4 + -3)))
         || ((uVar2 = (ulonglong)*puVar4, *(uint *)(lVar6 + (longlong)puVar4) != *puVar4 ||
             (((uVar2 = 0, *(char *)(lVar6 + 4 + (longlong)puVar4) != (char)puVar4[1] ||
               (uVar2 = (ulonglong)puVar4[2], *(uint *)(lVar6 + 8 + (longlong)puVar4) != puVar4[2]))
              || (uVar2 = (ulonglong)puVar4[3],
                 *(uint *)(lVar6 + 0xc + (longlong)puVar4) != puVar4[3])))))) goto LAB_1803c2176;
      pcVar5 = pcVar5 + 0x14;
      puVar4 = puVar4 + 5;
    } while (pcVar5 != param_1 + 300);
  }
  uVar2 = 0;
  if ((((param_1[300] == *(char *)(param_2 + 300)) &&
       (uVar2 = 0, param_1[0x12d] == *(char *)(param_2 + 0x12d))) &&
      ((uVar2 = 0, param_1[0x12e] == *(char *)(param_2 + 0x12e) &&
       ((uVar2 = (ulonglong)*(uint *)(param_2 + 0x130),
        *(uint *)(param_1 + 0x130) == *(uint *)(param_2 + 0x130) &&
        (uVar2 = (ulonglong)*(uint *)(param_2 + 0x134),
        *(uint *)(param_1 + 0x134) == *(uint *)(param_2 + 0x134))))))) &&
     ((uVar2 = 0, param_1[0x138] == *(char *)(param_2 + 0x138) &&
      ((uVar2 = (ulonglong)*(uint *)(param_2 + 0x13c),
       *(uint *)(param_1 + 0x13c) == *(uint *)(param_2 + 0x13c) &&
       (uVar2 = (ulonglong)*(uint *)(param_2 + 0x140),
       *(uint *)(param_1 + 0x140) == *(uint *)(param_2 + 0x140))))))) {
    uVar1 = *(uint *)(param_2 + 0x144);
    uVar2 = (ulonglong)uVar1;
    if (*(uint *)(param_1 + 0x144) == uVar1) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
LAB_1803c2176:
  return uVar2 & 0xffffffffffffff00;
}



