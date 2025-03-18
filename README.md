# OOP

Programa skirta failų, turinčių skirtingą studentų skaičių, testavimui su STL konteineriais: vektoriumi, dvipuse eile bei sąrašu.

# Kompiuterio specifikacijos
- AMD Ryzen 5 5500U CPU
- 32 GB RAM
- 256GB SSD storage
---
<table class ="fixed">
    <thead>
        <tr>
            <th width=100px></th>
            <th width=100px> Konteinerio tipas</th>
            <th width=100px> Nuskaitymas iš failo (s)</th>
            <th width=100px> Rikiavimas (s) </th>
            <th width=100px> Skirstymas į "pirmūnus" ir "nesimokančius" (s) </th>
            <th width=100px> Bendras programos vykdymo laikas (s) </th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td rowspan=3>Studentai1000.txt</td>
            <td>Vektorius</td>
            <td>0</td>
            <td>0.004</td>
            <td>0</td>
            <td><b>0.004</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>0.002</td>
            <td>0.001</td>
            <td>0</td>
            <td><b>0.003</b></td>
        </tr>
        <tr>
            <td>Sąrašas</td>
            <td>0</td>
            <td>0.001</td>
            <td>0</td>
            <td><b>0.001</b></td>
        </tr>
        <tr>
            <td rowspan = 3>Studentai10000.txt</td>
            <td>Vektorius</td>
            <td>0.012</td>
            <td>0.004</td>
            <td>0</td>
            <td><b>0.016</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>0.014</td>
            <td>0.005</td>
            <td>0</td>
            <td><b>0.019</b></td>
        </tr>
        <tr>
            <td>Listas</td>
            <td>0.015</td>
            <td>0.001</td>
            <td>0.002</td>
            <td><b>0.018</b></td>
        </tr>
        <tr>
            <td rowspan=3>Studentai100000.txt</td>
            <td>Vektorius</td>
            <td>0.083</td>
            <td>0.076</td>
            <td>0.018</td>
            <td><b>0.177</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>0.095</td>
            <td>0.098</td>
            <td>0.017</td>
            <td><b>0.021</b></td>
        </tr>
        <tr>
            <td>Sąrašas</td>
            <td>0.098</td>
            <td>0.038</td>
            <td>0.021</td>
            <td><b>0.157</b></td>
        </tr>
      <tr>
            <td rowspan=3>Studentai1000000.txt</td>
            <td>Vektorius</td>
            <td>1.142</td>
            <td>1.027</td>
            <td>0.200</td>
            <td><b>2.369</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>1.207</td>
            <td>1.355</td>
            <td>0.176</td>
            <td><b>2.738</b></td>
        </tr>
        <tr>
            <td>Sąrašas</td>
            <td>1.288</td>
            <td>0.616</td>
            <td>0.209</td>
            <td><b>2.113</b></td>
        </tr>
      <tr>
            <td rowspan=3>Studentai10000000.txt</td>
            <td>Vektorius</td>
            <td>11.537</td>
            <td>13.629</td>
            <td>1.967</td>
            <td><b>27.133</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>12.135</td>
            <td>18.076</td>
            <td>1.771</td>
            <td><b>31.982</b></td>
        </tr>
        <tr>
            <td>Sąrašas</td>
            <td>13.013</td>
            <td>7.682</td>
            <td>2.116</td>
            <td><b>22.811</b></td>
        </tr>
    </tbody>
</table>











![image](https://github.com/user-attachments/assets/91d1abe2-b88f-4a38-9e7f-404530484eab)








-----
# Strategijos
<details>
    <summary><h2>1 strategija</h2></summary>
    <table class ="fixed">
    <thead>
        <tr>
            <th width=100px></th>
            <th width=100px> Konteinerio tipas</th>
            <th width=100px> Nuskaitymas iš failo (s)</th>
            <th width=100px> Rikiavimas (s) </th>
            <th width=100px> Skirstymas į "pirmūnus" ir "nesimokančius" (s) </th>
            <th width=100px> Bendras programos vykdymo laikas (s) </th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td rowspan=3>Studentai1000.txt</td>
            <td>Vektorius</td>
            <td>0.00823915</td>
            <td>0</td>
            <td>0</td>
            <td><b>0.00823915</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>0.0048692</td>
            <td>0.001</td>
            <td>0.00172235</td>
            <td><b>0.00759155</b></td>
        </tr>
        <tr>
            <td>Sąrašas</td>
            <td>0.0039488</td>
            <td>0</td>
            <td>0</td>
            <td><b>0.0039488</b></td>
        </tr>
        <tr>
            <td rowspan = 3>Studentai10000.txt</td>
            <td>Vektorius</td>
            <td>0.0262587</td>
            <td>0.0058331</td>
            <td>0.01</td>
            <td><b>0.0420918</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>0.0337307</td>
            <td>0.00829305</td>
            <td>0.0115557</td>
            <td><b>0.05357945</b></td>
        </tr>
        <tr>
            <td>Listas</td>
            <td>0.03489</td>
            <td>0.005</td>
            <td>0.01</td>
            <td><b>0.04989</b></td>
        </tr>
        <tr>
            <td rowspan=3>Studentai100000.txt</td>
            <td>Vektorius</td>
            <td>0.273982</td>
            <td>0.125936</td>
            <td>0.0947833</td>
            <td><b>0.4947013</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>0.288499</td>
            <td>0.155954</td>
            <td>0.080126</td>
            <td><b>0.524579</b></td>
        </tr>
        <tr>
            <td>Sąrašas</td>
            <td>0.207837</td>
            <td>0.03994</td>
            <td>0.09321</td>
            <td><b>0.340987</b></td>
        </tr>
      <tr>
            <td rowspan=3>Studentai1000000.txt</td>
            <td>Vektorius</td>
            <td>2.53419</td>
            <td>1.45217</td>
            <td>0.84538</td>
            <td><b>4.83174</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>2.6325</td>
            <td>1.79048</td>
            <td>0.741904</td>
            <td><b>5.164884</b></td>
        </tr>
        <tr>
            <td>Sąrašas</td>
            <td>2.72272</td>
            <td>0.608488</td>
            <td>0.845761</td>
            <td><b>4.176969</b></td>
        </tr>
      <tr>
            <td rowspan=3>Studentai10000000.txt</td>
            <td>Vektorius</td>
            <td>25.215</td>
            <td>18.9084</td>
            <td>8.07938</td>
            <td><b>52.20278</b></td>
        </tr>
        <tr>
            <td>Dvipusė eilė</td>
            <td>26.043</td>
            <td>23.1564</td>
            <td>7.65617</td>
            <td><b>56.85557</b></td>
        </tr>
        <tr>
            <td>Sąrašas</td>
            <td>27.1392</td>
            <td>7.11418</td>
            <td>8.69922</td>
            <td><b>42.9526</b></td>
        </tr>
    </tbody>
</table>







![image](https://github.com/user-attachments/assets/e5ab9812-702d-406b-88d8-bd6cbacd8929)


</details>
