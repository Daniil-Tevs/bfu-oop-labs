#include <iostream>
#include <vector>

template <typename T>
class Array3D {
public:
    Array3D(int dim0, int dim1, int dim2)
            : m_dim0(dim0), m_dim1(dim1), m_dim2(dim2) {
        m_data.resize(dim0 * dim1 * dim2);
    }


    //Перегрузка оператора индексирования [][][] напрямую неаозможно, поэтому применяем перегрузку ()
    T& operator()(int i, int j, int k) {
        return m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k];
    }

    //Срез куба в x = i - в виде строки
    std::vector<T> GetValuesX(int i) {
        std::vector<T> result(m_dim1 * m_dim2);
        for (int j = 0; j < m_dim1; ++j) {
            for (int k = 0; k < m_dim2; ++k) {
                result[j * m_dim2 + k] = m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k];
            }
        }
        return result;
    }

    //Срез куба в x = i - в виде квадрата
    std::vector<std::vector<T>> GetValuesX2D(int i) {
        std::vector<std::vector<T>> result;
        std::vector<T> tmp;
        for (int j = 0; j < m_dim1; ++j) {
            tmp.clear();
            for (int k = 0; k < m_dim2; ++k) {
                tmp.push_back(m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k]);
            }
            if(!tmp.empty())
                result.push_back(tmp);
        }
        return result;
    }

    //Срез куба в y = i - в виде строки
    std::vector<T> GetValuesY(int j) {
        std::vector<T> result(m_dim0 * m_dim2);
        for (int i = 0; i < m_dim0; ++i) {
            for (int k = 0; k < m_dim2; ++k) {
                result[i * m_dim2 + k] = m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k];
            }
        }
        return result;
    }

    //Срез куба в y = i - в виде квадрата
    std::vector<std::vector<T>> GetValuesY2D(int j) {
        std::vector<std::vector<T>> result;
        std::vector<T> tmp;
        for (int i = 0; i < m_dim0; ++i) {
            tmp.clear();
            for (int k = 0; k < m_dim2; ++k) {
                tmp.push_back(m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k]);
            }
            if(!tmp.empty())
                result.push_back(tmp);
        }
        return result;
    }

    //Срез куба в z = i - в виде строки
    std::vector<T> GetValuesZ(int k) {
        std::vector<T> result(m_dim0 * m_dim1);
        for (int i = 0; i < m_dim0; ++i) {
            for (int j = 0; j < m_dim1; ++j) {
                result[i * m_dim1 + j] = m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k];
            }
        }
        return result;
    }
    //Срез куба в z = i - в виде квадрата
    std::vector<std::vector<T>> GetValuesZ2D(int k) {
        std::vector<std::vector<T>> result;
        std::vector<T> tmp;
        for (int i = 0; i < m_dim0; ++i) {
            tmp.clear();
            for (int j = 0; j < m_dim1; ++j) {
                tmp.push_back(m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k]);
            }
            if(!tmp.empty())
                result.push_back(tmp);
        }
        return result;
    }

    std::vector<T> GetValuesXY(int i, int j) {
        std::vector<T> result(m_dim2);
        for (int k = 0; k < m_dim2; ++k) {
            result[k] = m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k];
        }
        return result;
    }

    std::vector<T> GetValuesYZ(int j, int k) {
        std::vector<T> result(m_dim0);
        for (int i = 0; i < m_dim0; ++i) {
            result[k] = m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k];
        }
        return result;
    }

    std::vector<T> GetValuesXZ(int i, int k) {
        std::vector<T> result(m_dim1);
        for (int j = 0; j < m_dim1; ++j) {
            result[k] = m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k];
        }
        return result;
    }


    void SetValues0(int i, const std::vector<T>& values) {
        for (int j = 0; j < m_dim1; ++j) {
            for (int k = 0; k < m_dim2; ++k) {
                m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k] = values[j * m_dim2 + k];
            }
        }
    }

    void SetValues1(int j, const std::vector<T>& values) {
        for (int i = 0; i < m_dim0; ++i) {
            for (int k = 0; k < m_dim2; ++k) {
                m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k] = values[j * m_dim2 + k];
            }
        }
    }

    void SetValues2(int k, const std::vector<T>& values) {
        for (int i = 0; i < m_dim0; ++i) {
            for (int j = 0; j < m_dim1; ++j) {
                m_data[i * m_dim1 * m_dim2 + j * m_dim2 + k] = values[j * m_dim2 + k];
            }
        }
    }

    void SetValues01(int i, int j, const std::vector<T>& values) {
        for (int k = 0; k < m_dim2; ++k) {
            m_data[(i * m_dim1 + j) * m_dim2 + k] = values[i];
        }
    }

    void SetValues12(int j, int k, const std::vector<T>& values) {
        for (int i = 0; i < m_dim0; ++i) {
            m_data[(i * m_dim1 + j) * m_dim2 + k] = values[i];
        }
    }

    void SetValues02(int i, int k, const std::vector<T>& values) {
        for (int j = 0; j < m_dim1; ++j) {
            m_data[(i * m_dim1 + j) * m_dim2 + k] = values[i];
        }
    }

    void Fill(int x, int y, int z, T value){
        m_dim0 = x;
        m_dim1 = y;
        m_dim2 = z;
        m_data.resize(x * y * z);
        for (int i = 0; i < x * y * z; ++i) {
            m_data[i] = value;
        }
    }

    void FillZero(int x, int y, int z){
        m_dim0 = x;
        m_dim1 = y;
        m_dim2 = z;
        m_data.resize(x * y * z);
        for (int i = 0; i < x * y * z; ++i) {
            m_data[i] = 0;
        }
    }

private:
    int m_dim0;
    int m_dim1;
    int m_dim2;
    std::vector<T> m_data;
};
